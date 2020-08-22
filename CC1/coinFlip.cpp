#include "coinFlip.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>

#define COUT std::cout
#define ENDL std::endl

int** generateCoinFlipModel(int numFlips) {
    // Allocating memory
    int** flips = new int* [numFlips+1];

    for (int i = 0; i < numFlips + 1; ++i) {
        flips[i] = new int [i+1];
    }

    // Calculating pascal triangle
    for (int n = 0; n < numFlips + 1; n++) {
        // Sets end values = 1
        flips[n][0] = 1;
        flips[n][n] = 1;

        if (n != 0) {
            flips[n][1] = n;
            flips[n][n-1] = n;
        }

        for (int i = 2; i <= n/2; i++) {
            int temp = flips[n-1][i-1] + flips[n-1][i];
            flips[n][i] = temp;
            flips[n][n-i] = temp;
        }
    }
    return flips;
}

int getValue(int** coinFlipModel, int numFlips, int numHeads) {
    return coinFlipModel[numFlips][numHeads];
}

int getSumCombos(int** coinFlipModel, int numFlips) {
    int total = 0;
    for (int i = 0; i <= numFlips; i++) {
        total += coinFlipModel[numFlips][i];
    }
    return total;
}

int getPercentage(int** coinFlipModel, int numFlips, int numHeads) {
    int numCombos = getSumCombos(coinFlipModel, numFlips);
    int comboFrequency = getValue(coinFlipModel, numFlips, numHeads);

    double percent = (double)comboFrequency / numCombos;
    double roundedPercent = round(percent * 1000.0) / 10.0;

    return roundedPercent;
}
