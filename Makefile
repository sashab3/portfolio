CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror

all: main.o Vector3D.o
	$(CXX) $(CXXFLAGS) -o main main.o Vector3D.o

main.o: main.cpp Vector3D.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Vector3D.o: Vector3D.cpp Vector3D.hpp
	$(CXX) $(CXXFLAGS) -c Vector3D.cpp

clean:
	rm -f *.o main