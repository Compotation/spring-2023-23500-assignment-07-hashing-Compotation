OBJECTS = Node.o Person.o List.o Dictionary.o
CXXFLAGS = -g

all: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

main.o: main.cpp Node.h Dictionary.h List.h
Dictionary.o: Dictionary.cpp Dictionary.h List.h Node.h Person.h
Node.o: Node.cpp Node.h Person.h

Person.o: Person.cpp Person.h
List.o: List.h List.cpp Node.h Person.h
tests.o: tests.cpp doctest.h
clean:
	rm -f main tests *.o
