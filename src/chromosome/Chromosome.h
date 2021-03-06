#pragma once

#include <iostream>
#include <random>
#include "../knapsack/Item.h"

using std::vector;
using std::string;

class Chromosome {
private:
    vector<int> chrom;
    int maxGene;
    double fitness;
    // mersenne twister
    std::random_device rd;
    std::mt19937 engine{rd()};
    std::uniform_int_distribution<int> binary{0,1};
public:
    // constructor
    Chromosome(int p_maxGene){
        maxGene = p_maxGene;
        fitness = 0;
    }

    // destructor
    ~Chromosome(){

    }

//    int getChromosomeSize() { return chrom.size(); }
    void populateChromosome();
    void removeItemFromChromosome();
    string getChromosome();
//    void calcChromosomeFitness();
    double getFitness() { return fitness; }
    double setFitness(double p_fitness) { fitness = p_fitness; }
    int getGene(int p_index){ return chrom.at(p_index); }
    int setGene(int p_value){ chrom.push_back(p_value); }
    int setGene(int p_index, int p_value){ (chrom.at(p_index) = p_value); }


};

