SRCS=$(wildcard *.cpp **/*.cpp)
CC_FLAGS=-O0 -std=c++14 -g -ggdb -Wall

all:
	clang++ $(CC_FLAGS) $(SRCS) -o pandemic-simulator.out
