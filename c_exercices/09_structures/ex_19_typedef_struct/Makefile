CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_19_typedef_struct
SRC = ex_19_typedef_struct.c
HEADER = ex_19_typedef_struct.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean