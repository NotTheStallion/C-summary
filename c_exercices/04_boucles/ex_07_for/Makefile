CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_07_for
SRC = ex_07_for.c
HEADER = ex_07_for.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean