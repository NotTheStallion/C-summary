CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_04_comparaison
SRC = ex_04_comparaison.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean