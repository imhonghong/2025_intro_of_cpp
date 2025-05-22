lab3B: lab3B.o Clock.o
	g++ -o lab3B lab3B.o Clock.o


Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp

lab3B.o: lab3B.cpp Clock.h
	g++ -c lab3B.cpp

clean:
	rm -f lab3B lab3B.o Clock.o

