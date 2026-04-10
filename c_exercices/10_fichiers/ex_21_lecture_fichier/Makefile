CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_21_lecture_fichier
SRC = ex_21_lecture_fichier.c
HEADER = ex_21_lecture_fichier.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean