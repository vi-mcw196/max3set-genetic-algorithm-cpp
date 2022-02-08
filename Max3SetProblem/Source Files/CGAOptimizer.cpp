#include "../Header Files/CGAOptimizer.h"


CGAOptimizer::CGAOptimizer(int populationSize, int mutationChance, double maxBitsToMutateInPercent, int crossChance, int genLength,
                           SmartPointer<CMax3SatProblem> &smartPointerToProblem) {
    i_populationSize = populationSize;
    i_maxBitsToMutate = (int) (maxBitsToMutateInPercent / 100 * genLength);
    i_mutationChance = mutationChance;
    population = std::vector<CGAIndividual *>(i_populationSize);
    i_genLength = smartPointerToProblem->getIGenLength();
    i_crossChance = crossChance;

    this->smartPointerToProblem = SmartPointer<CMax3SatProblem>(smartPointerToProblem);
}

void CGAOptimizer::Initialize() {
    for (int i = 0; i < i_populationSize; i++) {
        population[i] = new CGAIndividual(smartPointerToProblem.getPointer()->getIGenLength(), smartPointerToProblem);
    }

    calculateFitness(population);
}

void CGAOptimizer::runIteration() {
    std::vector<CGAIndividual *> temporalPopulation = std::vector<CGAIndividual *>();

    while (temporalPopulation.size() < i_populationSize) {
        CGAIndividual *parent1 = bestParent();
        CGAIndividual *parent2 = secondBestParent();

        CGAIndividual *child1 = new CGAIndividual(i_genLength, smartPointerToProblem);
        CGAIndividual *child2 = new CGAIndividual(i_genLength, smartPointerToProblem);

        if (parent1->iRandom(100) < i_crossChance) {
            child1 = parent1->crossover(parent1, parent2, i_genLength);
        }

        if (parent1->iRandom(100) < i_crossChance) {
            child2 = parent2->crossover(parent1, parent2, i_genLength);
        }

        child1->v_mutation(i_maxBitsToMutate);
        child2->v_mutation(i_maxBitsToMutate);

        temporalPopulation.push_back(child1);
        temporalPopulation.push_back(child2);
    }

    population = temporalPopulation;
    calculateFitness(population);
}

CGAIndividual *CGAOptimizer::bestParent() {
    int maxFit = -1;
    int maxFitIndex = -1;
    for (int i = 0; i < population.size(); i++) {
        if (maxFit <= population[i]->getIFitness()) {
            maxFit = population[i]->getIFitness();
            maxFitIndex = i;
        }
    }
    i_indexOfTheBest = maxFitIndex;
    return population[i_indexOfTheBest];
}

CGAIndividual *CGAOptimizer::secondBestParent() {
//    CGAIndividual* secondBestParent;
    int maxFit1 = 0;
    int maxFit2 = 0;
    for (int i = 0; i < population.size(); i++) {
        if (population[i]->getIFitness() > population[maxFit1]->getIFitness()) {
            maxFit2 = maxFit1;
            maxFit1 = i;
        } else if (population[i]->getIFitness() > population[maxFit2]->getIFitness()) {
            maxFit2 = i;
        }
    }
    i_indexOfTheSecondBest = maxFit2;
//    secondBestParent = new CGAIndividual(*population[maxFit2]);
    return population[maxFit2];
}

CGAOptimizer::~CGAOptimizer() {
    for (int i = 0; i < population.size(); i++) {
        delete population[i];
    }
}

CGAOptimizer::CGAOptimizer(const CGAOptimizer &sample) {
    v_copy(sample);
}

CGAOptimizer &CGAOptimizer::operator=(const CGAOptimizer &sample) {
    if (this == &sample)
        return *this;
    v_copy(sample);
    return *this;
}

void CGAOptimizer::v_copy(const CGAOptimizer &Other) {
    i_populationSize = Other.i_populationSize;
    i_mutationChance = Other.i_mutationChance;
    i_maxBitsToMutate = Other.i_maxBitsToMutate;

    for (int i = 0; i < population.size(); i++) {
        population[i] = Other.population[i];
    }

    i_indexOfTheBest = Other.i_indexOfTheBest;
    i_indexOfTheSecondBest = Other.i_indexOfTheSecondBest;
    smartPointerToProblem = Other.smartPointerToProblem;
}

void CGAOptimizer::calculateFitness(std::vector<CGAIndividual *> temporalPopulation) const {
    for (int i = 0; i < i_populationSize; i++) {
        temporalPopulation[i]->iFitness();
    }
}

int CGAOptimizer::getBestFitness() {
    int i_bestFitness = -1;
    for (int i = 0; i < i_populationSize; i++) {
        if (i_bestFitness < population[i]->iFitness()) {
            i_bestFitness = population[i]->getIFitness();
        }
    }
    return i_bestFitness;
}



