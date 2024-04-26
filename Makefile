1-1:
	g++ -std=c++11 -o main-1-1.o main-1-1.cpp AirVehicle.cpp
2-1:
	g++ -std=c++11 -o main-2-1.o main-2-1.cpp AirVehicle.cpp Helicopter.cpp
2-2:
	g++ -std=c++11 -o main-2-2.o main-2-2.cpp AirVehicle.cpp Airplane.cpp
3-1:
	g++ -std=c++11 -o main-3-1.o main-3-1.cpp AirFleet.cpp AirVehicle.cpp Airplane.cpp Helicopter.cpp

cleanup:
	rm -rf *.o