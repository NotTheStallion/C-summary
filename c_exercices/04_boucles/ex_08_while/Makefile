CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_08_while
SRC = ex_08_while.c
HEADER = ex_08_while.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean