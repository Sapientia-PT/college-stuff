OBJECTS = main.o par.o positivo.o roots.o
TO_COMPARE = main.o par.o

par: $(OBJECTS)
	gcc $(OBJECTS) -o par

main.o: main.c funcoes.h
	gcc -c main.c

par.o: par.c
	gcc -c par.c

roots.o: roots.c
	gcc -c roots.c

clean:
	rm -f *.o out
	rm -f out
	
compare:
	sh compare.sh $(TO_COMPARE)