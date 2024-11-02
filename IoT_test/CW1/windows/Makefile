CC = x86_64-w64-mingw32-gcc
CFLAGS = -Wall

all: main.exe

main.exe: main.o temp_api.o
	$(CC) $(CFLAGS) -o main.exe main.o temp_api.o

main.o: main.c temp_api.h
	$(CC) $(CFLAGS) -c main.c

temp_api.o: temp_api.c temp_api.h
	$(CC) $(CFLAGS) -c temp_api.c

clean:
	rm -f *.o main.exe
