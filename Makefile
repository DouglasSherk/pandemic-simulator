SRCS=$(wildcard *.cpp **/*.cpp)

all:
	g++ -std=c++11 $(SRCS) -o pandemic-simulator.out
