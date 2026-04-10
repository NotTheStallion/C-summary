CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_02_constantes
SRC = ex_02_constantes.c
HEADER = ex_02_constantes.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean