CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_22_allocation_dynamique
SRC = ex_22_allocation_dynamique.c
HEADER = ex_22_allocation_dynamique.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean