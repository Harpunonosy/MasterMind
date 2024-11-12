all: main

main: main.o create_codes.o filter_codes.o player.o
	gcc -o main main.o create_codes.o filter_codes.o player.o

main.o: main.c
	gcc -c main.c

create_codes.o: create_codes.c
	gcc -c create_codes.c

filter_codes.o: filter_codes.c
	gcc -c filter_codes.c

player.o: player.c
	gcc -c player.c

clean:
	rm -f main *.o *~
