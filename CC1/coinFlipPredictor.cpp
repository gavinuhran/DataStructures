#include "coinFlip.h"
#include "coinFlip.cpp"
#include <iostream>

#define CIN std::cin
#define CERR std::cerr

int main() {
    int numFlips;
    COUT << "Enter the number of times you would like to flip a coin:  ";
    CIN >> numFlips;

    if (numFlips < 1) {
        CERR << "An invalid number of coin flips was entered." << ENDL;
        return -1;
    }

    int** coinFlipModel = generateCoinFlipModel(numFlips);

    COUT << ENDL;

    int numHeads, numTails;
    COUT << "Enter a combination of heads and tails to see the chance that combination occurs after the coin is flipped " << numFlips << " time(s) [two numbers only]:  ";
    CIN >> numHeads >> numTails;
    COUT << ENDL;

    if (numHeads + numTails != numFlips) {
        CERR << "The number of heads and tails entered does not sum to the number of coin flips." << ENDL;
        return -2;
    }
    else if (numHeads < 0 || numHeads > numFlips) {
        CERR << "An invalid number of heads or tails was entered." << ENDL;
        return -3;
    }
    else {
        double percent = getPercentage(coinFlipModel, numFlips, numHeads);
        COUT << "The percent chance of " << numHeads << " head(s) and " << numTails << " tail(s) after " << numFlips << " coin flips is " << percent << "%." << ENDL;
    }

    COUT << ENDL;

    return 0;
}
