#include "../include/PriorityQueue.h"
#include "../include/Priority.h"

#include <iostream>
#include <string>

#define COUT std::cout
#define ENDL std::endl

int main() {
    COUT << ENDL;

    PriorityQueue<std::string> theList;

    theList.push("Cheering", 5);
    COUT << theList << ENDL;

    theList.push("The", 3);
    COUT << theList << ENDL;

    theList.push("Name", 7);
    COUT << theList << ENDL;

    theList.push("Wake", 1);
    COUT << theList << ENDL;

    theList.push("Echoes", 4);
    COUT << theList << ENDL;

    theList.push("Her", 6);
    COUT << theList << ENDL;
    
    theList.push("Up", 2);
    COUT << theList << ENDL;
}