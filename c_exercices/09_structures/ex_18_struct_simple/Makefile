CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_18_struct_simple
SRC = ex_18_struct_simple.c
HEADER = ex_18_struct_simple.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean