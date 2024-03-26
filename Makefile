orchestra:
	g++ -std=c++11 -o orchestra.o main-1-2.cpp Orchestra.cpp Musician.cpp

musician:
	g++ -std=c++11 -o musician.o main-1-1.cpp Musician.cpp

cleanup:
	rm -rf *.o