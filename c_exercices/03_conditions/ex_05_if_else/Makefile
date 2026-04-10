CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_05_if_else
SRC = ex_05_if_else.c
HEADER = ex_05_if_else.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean