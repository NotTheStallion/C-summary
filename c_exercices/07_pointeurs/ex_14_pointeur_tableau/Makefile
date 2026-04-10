CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_14_pointeur_tableau
SRC = ex_14_pointeur_tableau.c
HEADER = ex_14_pointeur_tableau.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean