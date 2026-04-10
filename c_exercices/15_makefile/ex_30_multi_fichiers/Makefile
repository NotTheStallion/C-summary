CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = programme
OBJECTS = main.o calculatrice.o

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

main.o: main.c calculatrice.h
	$(CC) $(CFLAGS) -c main.c

calculatrice.o: calculatrice.c calculatrice.h
	$(CC) $(CFLAGS) -c calculatrice.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all run clean