lab3: lab3.o farm.o
	g++ -o lab3 lab3.o farm.o

farm.o: farm.cpp farm.h
	g++ -c farm.cpp

lab3.o: lab3.cpp farm.h
	g++ -c lab3.cpp

clean:
	rm -f lab3 lab3.o farm.o

