
CC=gcc #Compiler
CFLAGS=-c -Wall -O  #Optimization, show warnings
LDFLAGS=-lpthread -lm #linkers for math and multithreading
SOURCES=main.c calc.c figure.c #source files
OBJECTS=$(SOURCES:.c=.o) #object files
EXECUTABLE=binary #executable file

all:$(SOURCES) $(EXECUTABLE) # make executable form sources
    
$(EXECUTABLE): $(OBJECTS) # executable depends on objects
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ compile objects and make executable

main.o:
	$(CC) $(CFLAGS) main.c defines.h calc.h figure.h -o $@ #make object file main.o
calc.o:
	$(CC) $(CFLAGS) calc.c defines.h calc.h -o $@ #make object file calc.o
figure.c:
	$(CC) $(CFLAGS) figure.c defines.h figure.h -o $@ #make object file figure.o
clean:
	-rm -f *.o core *.core #make clean
