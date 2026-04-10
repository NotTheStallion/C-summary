CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_16_chaine_caracteres
SRC = ex_16_chaine_caracteres.c
HEADER = ex_16_chaine_caracteres.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean