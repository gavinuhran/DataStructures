#include "../include/PriorityQueue.h"
#include "../include/Priority.h"

#include <iostream>
#include <string>

#define COUT std::cout
#define ENDL std::endl

int main() {
    COUT << ENDL;

    PriorityQueue<std::string> theList;

    theList.push("Of", 5);
    COUT << theList << ENDL;

    theList.push("The", 3);
    COUT << theList << ENDL;

    theList.push("Dame", 7);
    COUT << theList << ENDL;

    theList.push("Here", 1);
    COUT << theList << ENDL;

    theList.push("Irish", 4);
    COUT << theList << ENDL;

    theList.push("Notre", 6);
    COUT << theList << ENDL;
    
    theList.push("Come", 2);
    COUT << theList << ENDL;
}
