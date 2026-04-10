CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_13_pointeur_base
SRC = ex_13_pointeur_base.c
HEADER = ex_13_pointeur_base.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean