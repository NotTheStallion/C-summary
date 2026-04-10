CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_12_prototype
SRC = ex_12_prototype.c
HEADER = ex_12_prototype.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean