CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_29_parcours_liste
SRC = ex_29_parcours_liste.c
HEADER = ex_29_parcours_liste.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean