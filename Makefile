Asset:
	g++ -std=c++11 -o main-1-1.o main-1-1.cpp Asset.cpp

AssetPortfolio:
	g++ -std=c++11 -o main-1-2.o main-1-2.cpp AssetPortfolio.cpp Asset.cpp

cleanup:
	rm -rf *.o