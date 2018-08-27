sort.x: main.o
	g++ main.o -o sort.x

main.o: main.cpp sort.h sort.cpp
	g++ -c main.cpp

clean:
	rm *.o *.x
