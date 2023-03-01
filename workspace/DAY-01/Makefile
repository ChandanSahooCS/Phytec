App:App.c sum.o sub.o mul.o ar.h
	gcc App.c sum.c sub.c mul.c -o App

sum.o:sum.c
	gcc -c sum.c -o sum.o

sub.o:sum.c
	gcc -c sub.c -o sub.o

mul.o:mul.c
	gcc -c mul.c -o mul.o

clean:
	rm *.o



