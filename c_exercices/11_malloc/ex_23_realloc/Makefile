CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_23_realloc
SRC = ex_23_realloc.c
HEADER = ex_23_realloc.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean