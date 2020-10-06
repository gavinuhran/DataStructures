#ifndef VACCINE_DISTRIBUTION_H
#define VACCINE_DISTRIBUTION_H

#include "PriorityQueue.h"

#include <iostream>

#define COUT std::cout
#define ENDL std::endl

void addPerson(PriorityQueue<std::string>& list, std::string name, int priority) {
    list.push(name, priority);
}

void vaccinatePeople(PriorityQueue<std::string>& list, int numVaccines) {
    if (numVaccines <= 0 || numVaccines > (int)list.size()) {
        COUT << "Invalid entry" << ENDL;
        return;
    }
    else {
        COUT << ENDL << "VACCINATED:" << ENDL;
        for (int i = 0; i < numVaccines; i++) {
            COUT << "  -  " << list.front() << ENDL;
            list.pop();
        }
    }
}

void printList(PriorityQueue<std::string>& list) {
    COUT << "PATIENTS:" << ENDL;
    COUT << list;
}

#endif