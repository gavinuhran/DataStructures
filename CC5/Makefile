PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


INC := include
SRC := src
OBJ := obj
EXE := exe


# Command: make SorDLLTest
SorDLLTestObjs := $(OBJ)/SorDLLTest.o

SorDLLTest: $(SorDLLTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/SorDLLTest $(SorDLLTestObjs)
	$(EXE)/./SorDLLTest 5 4 3 6 8 7

$(OBJ)/SorDLLTest.o: $(SRC)/SorDLLTest.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/SorDLLTest.cpp -o $@


# Command: make PQTest
PQTestObjs := $(OBJ)/PQTest.o

PQTest: $(PQTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/PQTest $(PQTestObjs)
	$(EXE)/./PQTest

$(OBJ)/PQTest.o: $(SRC)/PQTest.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/PQTest.cpp -o $@


# Command: make Creative
VaccineDistributionObjs := $(OBJ)/VaccineDistribution.o

Creative: $(VaccineDistributionObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/VaccineDistribution $(VaccineDistributionObjs)
	$(EXE)/./VaccineDistribution

$(OBJ)/VaccineDistribution.o: $(SRC)/VaccineDistribution.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/VaccineDistribution.cpp -o $@


# Will be called by grader to initialize your objects and executables folders
initialize:
	mkdir $(OBJ) $(EXE)


# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
