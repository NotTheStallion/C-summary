CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_03_arithmetique
SRC = ex_03_arithmetique.c
HEADER = ex_03_arithmetique.h

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean