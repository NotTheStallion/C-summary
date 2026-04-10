CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_10_tableau_2d
SRC = ex_10_tableau_2d.c
HEADER = ex_10_tableau_2d.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean