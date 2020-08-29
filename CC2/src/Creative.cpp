#include "../include/Alphabetize.h"
#include <cstdlib>
#include <time.h> // Used for enhanced random number generation

int main() {
    std::vector<std::string> NAMES{"Smith", "Johnson", "Williams", "Jones", "Brown", "Davis", "Miller", "King",
             "Wilson", "Moore", "Taylor", "Anderson", "Thomas", "Jackson", "White",
             "Harris", "Martin", "Thompson", "Garcia", "Martinez", "Robinson", "Clark",
             "Rodriguez", "Lewis", "Lee", "Walker", "Hall", "Allen", "Young", "Hernandez"}; // Top 100 most popular last names: https://www.rong-chang.com/namesdict/100_last_names.htm

    int numStudents;
    COUT << "--------------------" << ENDL;
    COUT << "Enter the number of students in the simulated class (1-30 students):  ";
    if (std::cin >> numStudents) {
        COUT << ENDL;
    }
    else {
        std::cerr << "Invalid Entry." << ENDL;
        return -1;
    }

    // Check for invalid entry, assuming entry is an integer
    if (numStudents < 1 || numStudents > 30) {
        std::cerr << "You entered an invalid class size of " << numStudents << " students." << ENDL;
        return -2;
    }

    std::vector<std::string> students{};

    std::srand((unsigned int)time(0)); // Re-intializes std::rand() using current time
    for (int i = 0; i < numStudents; ++i) {
        students.push_back(NAMES.at(std::rand() % 30));
    }

    std::vector<std::string> sortedStudents = students;
    quickSort(sortedStudents, 0, numStudents-1);

    printStudents(students, sortedStudents);
}
