CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_01_types_base
SRC = ex_01_types_base.c
HEADER = ex_01_types_base.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean