CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = ex_27_enum_switch
SRC = ex_27_enum_switch.c
HEADER = ex_27_enum_switch.h

all: $(TARGET)

$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean