CXX = g++
CXXFLAGS = -g -std=c++11 -Wall

SRCS = $(wildcard *.hpp)
OBJECTS = $(SRCS: .hpp=.o)

all: testIO 

clean:
	rm -rf *dSYM
	$(RM) *.o *.gc* test/*.o core main

testIO: $(OBJECTS) IO.hpp IO.cpp testIO.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

