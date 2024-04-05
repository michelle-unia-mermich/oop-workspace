1-1:
	g++ -std=c++11 -o main-1-1.o main-1-1.cpp Vehicle.cpp Car.cpp Bus.cpp Motorbike.cpp
1-2:
	g++ -std=c++11 -o main-1-2.o main-1-2.cpp ParkingLot.cpp Vehicle.cpp Car.cpp Bus.cpp Motorbike.cpp
1-3:
	g++ -std=c++11 -o main-1-3.o main-1-3.cpp ParkingLot.cpp Vehicle.cpp Car.cpp Bus.cpp Motorbike.cpp
cleanup:
	rm -rf *.o