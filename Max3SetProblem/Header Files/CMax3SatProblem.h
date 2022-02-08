#include <string>
#include<bits/stdc++.h>

#ifndef MINI_PROJECT_TEP_CMAX3SATPROBLEM_H
#define MINI_PROJECT_TEP_CMAX3SATPROBLEM_H


const int DEFAULT_LENGTH_FILEPATH = 200;
const int DEFAULT_LENGTH_SPLITTER = 5;
const int CONST_NUMS_IN_BRACKET = 6;

class CMax3SatProblem {
private:
    std::vector<int *> data;
    int i_numbersInOneBracket = CONST_NUMS_IN_BRACKET;
    int i_numOfBrackets;
    int i_genLength;
    std::string toParseStr;
    std::string delimiterStr;

public:
    CMax3SatProblem(std::string toParse, std::string delimiter) {
        toParseStr = std::move(toParse);
        delimiterStr = std::move(delimiter);
        data = std::vector<int *>();
        i_numOfBrackets = 0;
        i_genLength = 0;
    };

    void vCalculateBrackets();
    void vLoadInstance();

    static std::vector<std::string> split(const std::string &s, const std::string &delimiter);

    int compute(const int *pi_genes);

    virtual ~CMax3SatProblem();

    const std::vector<int *> &getData() const { return data; }

    int getIGenLength() { return i_genLength; }
};


#endif //MINI_PROJECT_TEP_CMAX3SATPROBLEM_H
