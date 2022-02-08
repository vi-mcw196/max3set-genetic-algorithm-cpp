#include <vector>
#include <random>
#include <iostream>
#include "CMax3SatProblem.h"
#include "MySmartPointer/SmartPointer.h"

using namespace std;

#ifndef MINI_PROJECT_TEP_CGAINDIVIDUAL_H
#define MINI_PROJECT_TEP_CGAINDIVIDUAL_H

const int DEFAULT_GEN_LENGTH = 350;

class CGAIndividual {
private:
    int i_fitness;
    int i_genLength;
    int *pi_genes;

    SmartPointer<CMax3SatProblem> smartPointerToProblem;

public:
    CGAIndividual() {
        i_fitness = 0;
        i_genLength = DEFAULT_GEN_LENGTH;
        pi_genes = new int[i_genLength + 1];
        for (int i = 0; i < i_genLength; i++) {
            pi_genes[i] = iBinaryRandom();
        }
    };

    CGAIndividual(int genLength, SmartPointer<CMax3SatProblem> &smartPointerToProblem);

    CGAIndividual(const CGAIndividual &sample);

    CGAIndividual &operator=(const CGAIndividual &sample);

    virtual ~CGAIndividual();

    int iFitness();

    CGAIndividual *crossover(CGAIndividual *parent1, CGAIndividual *parent2, int genLength);

    void v_mutation(int maxBitsToMutate);

    int getIFitness() const { return i_fitness; }

    int getIGenLength() const { return i_genLength; }

    int *getPiGenes() const { return pi_genes; }

    int iBinaryRandom();

    int iRandom(int MAX_VALUE);

    void v_copy(const CGAIndividual &Other);

    friend ostream &operator<<(ostream &os, const CGAIndividual &individual);

};


#endif //MINI_PROJECT_TEP_CGAINDIVIDUAL_H
