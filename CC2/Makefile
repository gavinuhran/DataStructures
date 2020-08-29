PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


INC := include
SRC := src
OBJ := obj
EXE := exe


# Command: make Fundamental
FundamentalObjs := $(OBJ)/Fundamental.o

Fundamental: $(FundamentalObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Fundamental $(FundamentalObjs)
	$(EXE)/./Fundamental

$(OBJ)/Fundamental.o: $(SRC)/Fundamental.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Fundamental.cpp -o $@

# Command: make Fundamental
CreativeObjs := $(OBJ)/Creative.o

Creative: $(CreativeObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Creative $(CreativeObjs)
	$(EXE)/./Creative

$(OBJ)/Creative.o: $(SRC)/Creative.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Creative.cpp -o $@

# Will be called by grader to initialize your objects and executables folders
initialize:
	mkdir $(OBJ) $(EXE)

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
