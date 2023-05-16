OBJECTS = Node.o Person.o
CXXFLAGS = -g

all: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

main.o: main.cpp Node.h

Node.o: Node.cpp Node.h Person.h Person.cpp

Person.o: Person.cpp Person.h

tests.o: tests.cpp doctest.h
clean:
	rm -f main tests *.o
