CC=gcc
CFLAGS= -Wall -I.
EXE_NAME = calculate
FILES = main.o
all: $(FILES)
	$(CC) -o $(EXE_NAME) $(FILES) $(CFLAGS)

clean:
	rm -f *.o

run:
	./$(EXE_NAME)

rebuild: clean all run

