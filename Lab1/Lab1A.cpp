#include <iostream>
#include <cstdlib>
#include "Lab1.h"

#define COUT std::cout
#define ENDL std::endl

int main(void) {
  long unsigned int theInt;
	float theFlt;
  double theDbl;
  char theChar;

	getValues(theInt, theFlt, theDbl, theChar);

  COUT << "-----------------------------" << ENDL;
  COUT << "Initial address of 'this': " << &theInt << ENDL << ENDL;

  COUT << "Long Unsigned Int\t: " << theInt << " at address " << &theInt << ENDL;
  COUT << "Float\t\t\t: " << theFlt << " at address " << &theFlt << ENDL;
  COUT << "Double\t\t\t: " << theDbl << " at address " << &theDbl << ENDL;
  COUT << "Char\t\t\t: " << theChar << " at address " << &theChar << ENDL;
}
