.PHONY :clean all run

all: ./bin/main.o ./bin/quick_sort.o
	g++ ./bin/main.o ./bin/quick_sort.o -o ./test

./bin/main.o: ./include/testcase.h ./src/main.c
	g++ -c ./src/main.c -I./include -o ./bin/main.o

./bin/quick_sort.o: ./src/quick_sort.c
	g++ -c ./src/quick_sort.c -o ./bin/quick_sort.o

run:
	./test

clean:
	rm -rf ./bin/*.o



