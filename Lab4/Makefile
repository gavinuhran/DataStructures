PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


INC := include
SRC := src
OBJ := obj
EXE := exe


Lab4Objs := $(OBJ)/Lab4.o

Lab4: $(Lab4Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Lab4 $(Lab4Objs)
	$(EXE)/./Lab4

$(OBJ)/Lab4.o: $(SRC)/Lab4.cpp $(INC)/MergeInt.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Lab4.cpp -o $@


initialize:
	mkdir $(OBJ) $(EXE)


all: InsertInt


clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
