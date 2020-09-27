#include <iostream>
#include <cstdlib>

#include "../include/DynArr.h"
#include "../include/Queue.h"

#define COUT std::cout
#define ENDL std::endl

int findRainCollected(DynArr<int>& map) {
    int total = 0;
    queue<int> savedPositions;

    for (int i = 0; i < (int)map.length() - 1; i++) {
        if (map[i] > map[i+1]) {
            savedPositions.push(i);
        }
    }

    while (!savedPositions.empty()) {
        int pos = savedPositions.front();
        savedPositions.pop();

        int startValue = map[pos];

        while (startValue >= 0 && startValue > map[pos+1]) {
            int count = 0;
            for (int j = pos + 1; j < (int)map.length(); j++) {
                if (map[j] >= startValue) {
                    total += count;
                    break;
                }
                else {
                    count++;
                }
            }
            startValue--;
        }   
    }

    return total;
}

int main() {
    DynArr<int> mapEX;
    mapEX.push_back(0);     mapEX.push_back(1);
    mapEX.push_back(0);     mapEX.push_back(2);
    mapEX.push_back(1);     mapEX.push_back(0);
    mapEX.push_back(1);     mapEX.push_back(3);
    mapEX.push_back(2);     mapEX.push_back(1);
    mapEX.push_back(2);     mapEX.push_back(1);

    COUT << ENDL << "Input:\t" << mapEX << ENDL;
    COUT << "Output:\t" << findRainCollected(mapEX) << ENDL;


    DynArr<int> map1;
    map1.push_back(2);     map1.push_back(1);
    map1.push_back(0);     map1.push_back(0);
    map1.push_back(0);     map1.push_back(4);
    map1.push_back(0);     map1.push_back(0);
    map1.push_back(3);     map1.push_back(0);
    map1.push_back(2);     map1.push_back(4);

    COUT << ENDL << "Input:\t" << map1 << ENDL;
    COUT << "Output:\t" << findRainCollected(map1) << ENDL;


    DynArr<int> map2;
    map2.push_back(6);     map2.push_back(0);
    map2.push_back(5);     map2.push_back(0);
    map2.push_back(4);     map2.push_back(0);
    map2.push_back(3);     map2.push_back(0);
    map2.push_back(2);     map2.push_back(0);
    map2.push_back(1);

    COUT << ENDL << "Input:\t" << map2 << ENDL;
    COUT << "Output:\t" << findRainCollected(map2) << ENDL;

    
    DynArr<int> map3;
    map3.push_back(1);     map3.push_back(0);
    map3.push_back(2);     map3.push_back(0);
    map3.push_back(3);     map3.push_back(0);
    map3.push_back(4);     map3.push_back(0);
    map3.push_back(5);     map3.push_back(0);
    map3.push_back(6);

    COUT << ENDL << "Input:\t" << map3 << ENDL;
    COUT << "Output:\t" << findRainCollected(map3) << ENDL;

    COUT << ENDL;

    return 0;
}