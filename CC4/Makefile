PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


INC := include
SRC := src
OBJ := obj
EXE := exe


# Command: make Problem1
Problem1Objs := $(OBJ)/Problem1.o

Problem1: $(Problem1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Problem1 $(Problem1Objs)
	$(EXE)/./Problem1

$(OBJ)/Problem1.o: $(SRC)/Problem1.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Problem1.cpp -o $@


# Command: make Problem2
Problem2Objs := $(OBJ)/Problem2.o

Problem2: $(Problem2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Problem2 $(Problem2Objs)
	$(EXE)/./Problem2

$(OBJ)/Problem2.o: $(SRC)/Problem2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Problem2.cpp -o $@


# Will be called by grader to initialize your objects and executables folders
initialize:
	mkdir $(OBJ) $(EXE)


# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
