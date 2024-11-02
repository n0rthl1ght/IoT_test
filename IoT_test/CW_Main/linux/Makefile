CC = gcc
CFLAGS = -Wall

all: main

main: main.o temp_api.o
	$(CC) $(CFLAGS) -o main main.o temp_functions.o

main.o: main.c temp_functions.h
	$(CC) $(CFLAGS) -c main.c

temp_api.o: temp_functions.c temp_functions.h
	$(CC) $(CFLAGS) -c temp_functions.c

clean:
	rm -f *.o main
