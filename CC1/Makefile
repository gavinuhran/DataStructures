PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)
PQCFLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
PQCXX    := -m64 -std=c++11 -Weffc++ $(PQCFLAGS)


# FUNDAMENTAL
FundamentalObjs :=  fundamental.o

fundamental: fundamental.o
		$(PP) $(CXXFLAGS) -o fundamental $(FundamentalObjs)
		./fundamental

fundamental.o: fundamental.cpp
		$(PP) $(CXXFLAGS) -c fundamental.cpp

# COIN FLIP PREDICTOR
CoinFlipPredictorObjs :=  coinFlipPredictor.o

coinFlipPredictor: coinFlipPredictor.o
		$(PP) $(CXXFLAGS) -o coinFlipPredictor $(CoinFlipPredictorObjs)
		./coinFlipPredictor

coinFlipPredictor.o: coinFlipPredictor.cpp
		$(PP) $(CXXFLAGS) -c coinFlipPredictor.cpp

# CLEAN
clean :
		rm -rf *.o fundamental coinFlipPredictor
