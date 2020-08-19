PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)
PQCFLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
PQCXX    := -m64 -std=c++11 -Weffc++ $(PQCFLAGS)



# voidTypes Example
# Command: make voidTypes

# LAB A
Lab1AObjs :=  Lab1A.o

Lab1A: Lab1A.o
		$(PP) $(CXXFLAGS) -o Lab1A $(Lab1AObjs)
		./Lab1A

Lab1A.o: Lab1A.cpp
		$(PP) $(CXXFLAGS) -c Lab1A.cpp


# LAB B
Lab1BObjs := Lab1B.o

Lab1B: Lab1B.o
		$(PP) $(CXXFLAGS) -o Lab1B $(Lab1BObjs)
		./Lab1B

Lab1B.o: Lab1B.cpp
		$(PP) $(CXXFLAGS) -c Lab1B.cpp


# LAB C
Lab1CObjs := Lab1C.o

Lab1C: Lab1C.o
		$(PP) $(CXXFLAGS) -o Lab1C $(Lab1CObjs)
		./Lab1C

Lab1C.o: Lab1C.cpp
		$(PP) $(CXXFLAGS) -c Lab1C.cpp

# CLEAN
clean :
		rm -rf *.o Lab1A Lab1B Lab1C
