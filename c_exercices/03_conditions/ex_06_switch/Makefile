CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_06_switch
SRC = ex_06_switch.c
HEADER = ex_06_switch.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean