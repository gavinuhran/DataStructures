#include "../include/PriorityQueue.h"
#include "../include/VaccineDistribution.h"

#include <iostream>

#define COUT std::cout
#define ENDL std::endl

void printMenu() {
    COUT << ENDL << "MENU:" << ENDL;
    COUT << "a) Add person" << ENDL;
    COUT << "b) Vaccinate people" << ENDL;
    COUT << "c) Print patient list" << ENDL;
    COUT << "q) Quit" << ENDL << ENDL;
}

void printPriorities() {
    COUT << ENDL << "PRIORITY:" << ENDL;
    COUT << "1) Essential Worker" << ENDL;
    COUT << "2) Elderly Citizen" << ENDL;
    COUT << "3) Immunocompromised Citizen" << ENDL;
    COUT << "4) Student at University" << ENDL;
    COUT << "5) US Citizen" << ENDL << ENDL;
}

int main() {
    PriorityQueue<std::string> patientList = PriorityQueue<std::string>();

    while (true) {

        char sel;
        printMenu();
        COUT << "Enter your selection:  ";

        if (std::cin >> sel) { COUT << ENDL; }
        else {
            COUT << "Invalid Entry." << ENDL;
            break;
        }

        if (sel == 'a') {
            std::string name;
            int p;

            COUT << "Enter the name:  ";
            if (std::cin >> name) {}
            else {
                COUT << "Invalid Entry." << ENDL;
                break;
            }

            printPriorities();
            COUT << "Enter their priority:  ";
            if (std::cin >> p) {}
            else {
                COUT << "Invalid Entry." << ENDL;
                break;
            }

            if (p < 1 || p > 5) {
                COUT << "Invalid Entry." << ENDL;
                break;
            }

            addPerson(patientList, name, p);
        }
        else if (sel == 'b') {
            int numVaccines;

            COUT << "Enter the number of vaccines you have:  ";
            if (std::cin >> numVaccines) {}
            else {
                COUT << "Invalid Entry." << ENDL;
                break;
            }

            vaccinatePeople(patientList, numVaccines);
        }
        else if (sel == 'c') {
            printList(patientList);
        }
        else if (sel == 'q') {
            break;
        }
        else {
            COUT << "Invalid Entry." << ENDL;
            break;
        }
    }

    return 0;
}