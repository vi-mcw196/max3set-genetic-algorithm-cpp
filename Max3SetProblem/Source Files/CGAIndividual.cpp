#include "../Header Files/CGAIndividual.h"

CGAIndividual::CGAIndividual(int genLength, SmartPointer<CMax3SatProblem>& smartPointerToProblem) {
    i_genLength = genLength;
    pi_genes = new int[i_genLength + 1];

    for (int i = 0; i < i_genLength; i++) {
        pi_genes[i] = iBinaryRandom();
    }
    this->smartPointerToProblem = SmartPointer<CMax3SatProblem>(smartPointerToProblem);
}
CGAIndividual::CGAIndividual(const CGAIndividual &sample) {
    v_copy(sample);
}

CGAIndividual& CGAIndividual::operator=(const CGAIndividual &sample) {
    if (this == &sample)
        return *this;
    v_copy(sample);
    return *this;
}


void CGAIndividual::v_copy(const CGAIndividual &Other) {
    i_genLength = Other.getIGenLength();
    pi_genes = new int[i_genLength + 1];

    for (int i = 0; i < i_genLength; i++) {
        pi_genes[i] = Other.getPiGenes()[i];
    }
    smartPointerToProblem = Other.smartPointerToProblem;
}


int CGAIndividual::iFitness() {
    i_fitness = smartPointerToProblem.getPointer()->compute(pi_genes);
    return i_fitness;
}


CGAIndividual* CGAIndividual::crossover(CGAIndividual* parent1, CGAIndividual* parent2, int genLength) {
    CGAIndividual* offspring = new CGAIndividual(genLength, smartPointerToProblem);
    for (int i = 0; i < genLength; i++) {
        if( iBinaryRandom() == 1 ) {
            offspring->pi_genes[i] = parent1->getPiGenes()[i];
        }
        else {
            offspring->pi_genes[i] = parent2->getPiGenes()[i];
        }
    }
    return offspring;
}

void CGAIndividual::v_mutation(int maxBitsToMutate) {
    for (int i = 0; i < maxBitsToMutate; i++) {
        int mutationBit  = iRandom(i_genLength);
        if (pi_genes[mutationBit] == 0) {
            pi_genes[mutationBit] = 1;
        } else {
            pi_genes[mutationBit] = 0;
        }
    }
}

int CGAIndividual::iBinaryRandom() {
    static unsigned int seed = time(0);
    seed = (8253729 * seed + 2396403);
    return seed % 2;
}

int CGAIndividual::iRandom(int MAX_VALUE) {
    static unsigned int seed = time(0);
    seed = (8253729 * seed + 2396403);
    return seed % (MAX_VALUE + 1);
}

CGAIndividual::~CGAIndividual() {
    delete pi_genes;
}

ostream &operator<<(ostream &os, const CGAIndividual &individual) {
    os << "i_fitness: " << individual.i_fitness << " i_genLength: " << individual.i_genLength << " pi_genes: "
       << " \n";
    for (int i = 0; i < individual.i_genLength; i++) {
        os << " " << individual.pi_genes[i];
    }
    os << '\n';
    return os;
}





