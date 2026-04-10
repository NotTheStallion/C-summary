CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_09_tableau_1d
SRC = ex_09_tableau_1d.c
HEADER = ex_09_tableau_1d.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean