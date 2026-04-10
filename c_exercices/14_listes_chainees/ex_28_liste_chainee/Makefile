CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_28_liste_chainee
SRC = ex_28_liste_chainee.c
HEADER = ex_28_liste_chainee.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean