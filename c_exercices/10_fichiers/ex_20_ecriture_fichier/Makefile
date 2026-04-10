CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_20_ecriture_fichier
SRC = ex_20_ecriture_fichier.c
HEADER = ex_20_ecriture_fichier.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) exemple.txt lignes.txt donnees.txt tableau.txt

.PHONY: all run clean