CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_26_enum_simple
SRC = ex_26_enum_simple.c
HEADER = ex_26_enum_simple.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean