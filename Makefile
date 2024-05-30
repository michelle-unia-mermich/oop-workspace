main-1:
	g++ -std=c++17 -o main-1.o main-1.cpp
	./main-1.o

main-2:
	g++ -std=c++11 -o main-2.o main-2.cpp
	./main-2.o

main-3:
	g++ -std=c++11 -o main-3.o main-3.cpp
	./main-3.o

cleanup:
	rm -rf *.o