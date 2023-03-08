OBJECTS = main.o par.o positivo.o

par: $(OBJECTS)
	gcc $(OBJECTS) -o par

main.o: main.c funcoes.h
	gcc -c main.c

par.o: par.c
	gcc -c par.c

clean:
	rm -f *.o out
	rm -f out