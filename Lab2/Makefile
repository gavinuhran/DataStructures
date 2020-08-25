PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


INC := include
SRC := src
OBJ := obj
EXE := exe


# Command: make Lab2
Lab2Objs := $(OBJ)/Lab2.o

Lab2: $(Lab2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Lab2 $(Lab2Objs)
	$(EXE)/./Lab2

$(OBJ)/Lab2.o: $(SRC)/Lab2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Lab2.cpp -o $@

# Will be called by grader to initialize your objects and executables folders
initialize:
	mkdir $(OBJ) $(EXE)

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
