#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string
#define SSTREAM std::stringstream

// Char check for long unsigned int, float, and double input
bool noBadChars(STRING testString) { // https://github.com/mmorri22/cse20312/blob/master/Lab01/cinStr.cpp
	for(unsigned int i = 0; i < testString.length(); i++) {
		if(testString[i] < '0' || testString[i] > '9') {
				if(testString[i] == '-') {
					if(i != 0) {
						return false;
          }
				}
				else if(testString[i] != '.'){
					return false;
				}
		}
	}
	return true;
}

int getValues(long unsigned int& longUnsigIntX, float& floatY, double& doubleZ, char& charX) {
  STRING strLongUnsigIntX;
  STRING strFloatY;
  STRING strDoubleZ;

  // Take input for long unsigned Integer
  COUT << "Input a long unsigned Integer: ";
  std::cin >> strLongUnsigIntX;
  if (!(SSTREAM(strLongUnsigIntX) >> longUnsigIntX && noBadChars(strLongUnsigIntX) && strLongUnsigIntX.find(".") == STRING::npos && strLongUnsigIntX.find("-") == STRING::npos)) {
    std::cerr << strLongUnsigIntX << " is not a valid long unsigned Integer" << ENDL;
    exit(-1);
  }

  // Take input for float
  COUT << "Input a float: ";
  std::cin >> strFloatY;
  if (!(SSTREAM(strFloatY) >> floatY && noBadChars(strFloatY))) {
		std::cerr << strFloatY << " is not a valid float" << ENDL;
		exit(-1);
	}

  // Take input for double
  COUT << "Input a double: ";
  std::cin >> strDoubleZ;
  if (!(SSTREAM(strDoubleZ) >> doubleZ && noBadChars(strDoubleZ))) {
    std::cerr << strDoubleZ << " is not a valid double" << ENDL;
    exit(-1);
  }

  // Take input for a charX
  COUT << "Input a char: ";
  std::cin >> charX;
  if (charX < ' ' || charX > '~') {
    std::cerr << charX << " is not a valid char" << ENDL;
    exit(-1);
  }
}
