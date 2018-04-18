CXX = g++
CXXFLAGS = -Wall -g

all: main.o Node.o
	$(CXX) $(CXXFLAGS) main.o Node.o -o main

main.o: main.cpp Node.hpp
	
Node.o: Node.hpp

clean:
	rm -rf *.o
	rm main