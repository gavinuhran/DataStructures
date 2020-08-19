#include <iostream>
#include <cstdlib>
#include "Lab1.h"

#define COUT std::cout
#define ENDL std::endl

class ValuePackage{
  private:
    long unsigned int theInt;
  	float theFlt;
    double theDbl;
    char theChar;

	public:
  	ValuePackage() {
      getValues(theInt, theFlt, theDbl, theChar);
    }

  	void printValues() {
  		COUT << "-----------------------------" << ENDL;
  		COUT << "Initial address of 'this': " << this << ENDL << ENDL;

      COUT << "Long Unsigned Int\t: " << this->theInt << " at address " << &(this->theInt) << ENDL;
      COUT << "Float\t\t\t: " << this->theFlt << " at address " << &(this->theFlt) << ENDL;
  		COUT << "Double\t\t\t: " << this->theDbl << " at address " << &(this->theDbl) << ENDL;
  		COUT << "Char\t\t\t: " << this->theChar << " at address " << (void *)&(this->theChar) << ENDL;
  	}
};

int main(void){

	ValuePackage vp1;

	COUT << "ValuePackage is at address " << &vp1 << ENDL;
	vp1.printValues();
	COUT << ENDL;

	return 0;
}
