CC = gcc
CFLAGS = -Wall -Wextra -g
AR = ar
ARFLAGS = rcs

LIBNAME = libbibliotheque.a
OBJS = bibliotheque.o
TARGET = programme

all: $(TARGET)

$(LIBNAME): $(OBJS)
	$(AR) $(ARFLAGS) $(LIBNAME) $(OBJS)

bibliotheque.o: bibliotheque.c bibliotheque.h
	$(CC) $(CFLAGS) -c bibliotheque.c

$(TARGET): main.c $(LIBNAME)
	$(CC) $(CFLAGS) -o $(TARGET) main.c -L. -lbibliotheque

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(LIBNAME) $(TARGET)

.PHONY: all run clean