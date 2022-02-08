#include <iostream>
#include "Header Files/CMax3SatProblem.h"
#include "Header Files/CGAOptimizer.h"
#include "Header Files/MySmartPointer/SmartPointer.h"
#include <chrono>

using namespace std::chrono;

int main() {
    std::string path = R"(C:\Users\38066\CLionProjects\Max3SetProblem\DataFiles\max3sat\350\m3s_350_0.txt)";
    std::string splitter = "  ";
    int populationSize = 1000;
    int iters = 1000;
    int mutChance = 10;
    int crossChance = 30;
    double mutationPercent = 1;

    SmartPointer<CMax3SatProblem> instanceOfProblem(new CMax3SatProblem(path, splitter));
    instanceOfProblem->vCalculateBrackets();
    instanceOfProblem->vLoadInstance();
    SmartPointer<CGAOptimizer> optimizer(new CGAOptimizer(populationSize, mutChance, mutationPercent, crossChance, instanceOfProblem->getIGenLength(), instanceOfProblem));
    auto start = high_resolution_clock::now();
    optimizer->Initialize();
    for (int i = 0; i < iters; i++) {
        optimizer->runIteration();
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time spent: " << duration.count() / 1000000 << " seconds" << '\n';
    cout << optimizer->getBestFitness();
    return 0;
}
