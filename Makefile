1-1:
	g++ -std=c++11 -o main-1-1.o main-1-1.cpp Appliance.cpp
2-1:
	g++ -std=c++11 -o main-2-1.o main-2-1.cpp Fridge.cpp Appliance.cpp
2-2:
	g++ -std=c++11 -o main-2-2.o main-2-2.cpp TV.cpp Appliance.cpp
1-3:
	g++ -std=c++11 -o main-1-3.o main-1-3.cpp Fridge.cpp Appliance.cpp

cleanup:
	rm -rf *.o