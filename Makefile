static:
	g++ -std=c++11 -o static_lecture.o static_lecture.cpp
main:
	g++  -o main.o main.cpp
cleanup:
	rm -rf *.o