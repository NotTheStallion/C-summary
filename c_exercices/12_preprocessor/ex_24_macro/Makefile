CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_24_macro
SRC = ex_24_macro.c
HEADER = ex_24_macro.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean