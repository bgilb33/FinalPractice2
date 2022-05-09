# Variables for compilation
CXX = g++
CXXFLAGS = -g -std=c++11

main: Q4.o
	$(CXX) $(CXXFLAGS) -o Q4.out Q4.o 

Q4.o:
	$(CXX) -c Q4.cpp

clean:
	find . -type f -name '*.out' -delete
	find . -type f -name '*.o' -delete
	find . -type f -name 'core.*' -delete

