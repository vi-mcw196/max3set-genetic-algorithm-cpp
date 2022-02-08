#include <iostream>
#include <string>

using namespace std;
#include "../Header Files/CMax3SatProblem.h"

void CMax3SatProblem::vCalculateBrackets() {
    string line;
    ifstream myFile(toParseStr);
    if (myFile.is_open()) {
        set<int> setAllNums = set<int>();
        while (getline(myFile, line)) {
            line = line.substr(2, (line.size() - 5));
            vector<string> dataInLine = split(line, delimiterStr);
            for (int i = 0; i < dataInLine.size(); i++) {
                setAllNums.insert(std::abs(stoi(dataInLine[i])));
            }
            i_numOfBrackets++;
        }
        i_genLength = setAllNums.size();
        myFile.close();
    } else cout << "Unable to open file";
}

void CMax3SatProblem::vLoadInstance() {
    string line;
    string line2;
    ifstream myFile(toParseStr);
    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            line = line.substr(2, (line.size() - 5));
            vector<string> dataInLine = split(line, delimiterStr);
            int *nums = new int[CONST_NUMS_IN_BRACKET];
            for (int i = 0; i < dataInLine.size(); i++) {
                if (dataInLine[i] == "-0") {
                    nums[i] = -1 * i_genLength;
                } else if (dataInLine[i] == "0") {
                    nums[i] = i_genLength;
                } else {
                    nums[i] = stoi(dataInLine[i]);
                }
            }
            data.push_back(nums);
        }



vector<string> CMax3SatProblem::split(const string &s, const string &delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}

CMax3SatProblem::~CMax3SatProblem() {
    for (int i = 0; i < data.size(); i++) {
        delete data[i];
    }
}

int CMax3SatProblem::compute(const int *pi_genes) {
    int i_fitness = 0;
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < CONST_NUMS_IN_BRACKET; j++) {
            if (data[i][j] < 0) {
                if (pi_genes[-1 * data[i][j]] == 0) {
                    i_fitness++;
                    break;
                }
            }
            else {
                if (pi_genes[data[i][j]] == 1) {
                    i_fitness++;
                    break;
                }
            }
        }
    }
    return i_fitness;
}






