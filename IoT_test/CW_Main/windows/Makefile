CC = x86_64-w64-mingw32-gcc
CFLAGS = -Wall

all: main.exe

main.exe: main.o temp_functions.o
	$(CC) $(CFLAGS) -o main.exe main.o temp_functions.o

main.o: main.c temp_functions.h
	$(CC) $(CFLAGS) -c main.c

temp_functions.o: temp_functions.c temp_functions.h
	$(CC) $(CFLAGS) -c temp_functions.c

clean:
	rm -f *.o main.exe
