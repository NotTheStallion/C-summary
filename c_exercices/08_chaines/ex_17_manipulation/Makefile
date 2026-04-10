CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_17_manipulation
SRC = ex_17_manipulation.c
HEADER = ex_17_manipulation.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean