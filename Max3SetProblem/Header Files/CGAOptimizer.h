#include <vector>
#include "../Header Files/CMax3SatProblem.h"
#include "../Header Files/CGAIndividual.h"
#include "MySmartPointer/SmartPointer.h"

#ifndef MINI_PROJECT_TEP_CGAOPTIMIZER_H
#define MINI_PROJECT_TEP_CGAOPTIMIZER_H

const int DEFAULT_MUTATION_CHANCE = 10;
const int DEFAULT_MAX_BITS_TO_MUTATE = 5;

class CGAOptimizer {
private:
    int i_populationSize;
    int i_mutationChance;
    int i_maxBitsToMutate;
    int i_crossChance;

    std::vector<CGAIndividual *> population;
    int i_genLength;

    int i_indexOfTheBest = 0;
    int i_indexOfTheSecondBest = 0;

    SmartPointer<CMax3SatProblem> smartPointerToProblem;
public:
    CGAOptimizer(int populationSize, int mutationChance, double maxBitsToMutateInPercent,int crossChance,
                 int genLength, SmartPointer<CMax3SatProblem> &smartPointerToProblem);

    CGAOptimizer(const CGAOptimizer &sample);
    CGAOptimizer &operator=(const CGAOptimizer &sample);
    void v_copy(const CGAOptimizer &Other);

    virtual ~CGAOptimizer();

    CGAIndividual *bestParent();
    CGAIndividual *secondBestParent();

    void calculateFitness(std::vector<CGAIndividual *> temporalPopulation) const;

    int getBestFitness();

    void Initialize();

    void runIteration();
};


#endif //MINI_PROJECT_TEP_CGAOPTIMIZER_H
