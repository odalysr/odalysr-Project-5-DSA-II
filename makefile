CXX = g++
CXXFLAGS = -g -std=c++11 -Wall

SRCS = $(wildcard *.hpp)
OBJECTS = $(SRCS: .hpp=.o)

all: main

clean:
	rm -rf *dSYM
	$(RM) *.o *.gc* test/*.o core main

main: $(OBJECTS) main.cpp lcs.hpp lcs.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

