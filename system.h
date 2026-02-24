#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>
#include <iostream>
#include <vector>
#include <random>
#include <cmath>
#include "disk.h"

class System {
    public:
        System(int N, double displacement,double radius, double boxSize, int seed);
        bool overlap(int i);
        void step();
        void enforceBoundaries(Disk & disk);
        void save(const std::string &filename);
        double uniform(double min, double max);

        std::vector<Disk> disks;
        double displacement;
        double boxSize;
        std::mt19937 gen;
        std::uniform_real_distribution<double> dist;
};

#endif