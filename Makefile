# Workshop Makefile

michelle: main.o
	g++ -o kate main.o

main.o: main.cpp workshop.h
	g++ -c main.cpp

run:
	./workshop
