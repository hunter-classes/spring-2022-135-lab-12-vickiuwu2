CXXFLAGS += -std=c++11
main: main.o funcs.o
	g++ -std=c++11 -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -std=c++11 -o tests tests.o funcs.o

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h

clean:
	rm -f main main.o funcs.o tests.o tests