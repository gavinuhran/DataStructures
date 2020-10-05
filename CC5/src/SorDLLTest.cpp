#include "../include/SorDLList.h"

#include <iostream>
#include <string>

#define COUT std::cout
#define ENDL std::endl

int getAndCheckInput(char* argv){
	
	int iter;
	for(iter = 0; argv[iter] != 0; ++iter){
		
		/* First character can be an number or */
		if(iter == 0 && (argv[iter] < 48 || argv[iter] > 57) && argv[iter] != 45){
			std::cerr <<  "Not a valid input: " << argv << " " << argv[iter] << std::endl;
			exit(-1);
			
		}
		else if( iter > 0 && (argv[iter] < 48 || argv[iter] > 57) ){
			
			std::cerr <<  "Not a valid input: " << argv << " " << argv[iter] << std::endl;
			exit(-1);
		}
	}
	
	
	return atoi(argv);
}

int main (int argc, char** argv)
{
	
	/* Test inputs for at least one integer */
	if(argc < 2){
		
		std::cerr <<  "Need at least one integer" << std::endl;
		exit(-1);
	}
	
	/* Initialize Number of Inputs to Linked List */
	int listLen = argc - 1, iter;
	int num;
	
	/* Call default constructor for Linked List */
	SorDLList<int> theList;
	
	/* Start at the first int, and go until the end of the command line */
	for(iter = 1; iter <= listLen; ++iter){
		
		int tempInt = getAndCheckInput(argv[iter]); // atoi(argv[iter]);
		std::cout << "Inserting " << tempInt << " into Linked List" << std::endl;
		theList.Insert(tempInt);
		std::cout << "theList: " << theList << std::endl;	
		
	}
	
	while(!theList.IsEmpty()){

		std::cout << std::endl << "Enter a value to be deleted: ";
		std::cin >> num;
		theList.Delete( num );
		/* Overloaded Output Operator */
		std::cout << "theList: " << theList << std::endl;
	
	}

    return 0;
}