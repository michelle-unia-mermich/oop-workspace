main:
	g++ -o main.o main.cpp Invoice.cpp
#Try writing a makefile that can build and run these tests in an automated way (see the example below).

# Compiler

CXX = g++

# Compiler flags

CXXFLAGS = -std=c++11 -Wall -Wextra

# Executable name, which is the name of the output.o we print out

TARGET = test_runner

# Source files

SRCS = test.cpp Invoice.cpp

# Build and run tests

.PHONY: all

all:
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)
	./$(TARGET)

# Clean rule

.PHONY: clean

clean:
	rm -f $(TARGET) 
#instead of -o when we remove files with extension.o; -f here means that we delete all files with the name as TARGET, not extension -f