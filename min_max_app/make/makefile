CC = gcc
CFLAGS = -Wall -c -g 
OFLAGS = -o
BIN = ../bin/
INCLUDE = -I../include/
HEADER = ../include/
SRC = ../src/
OBJ = ../obj/


all: $(OBJ)min_max_app.o $(OBJ)min_max.o 
	$(CC) $(OFLAGS) min_max_app $(OBJ)min_max_app.o $(OBJ)min_max.o
	mv min_max_app $(BIN)

$(OBJ)min_max_app.o: $(SRC)min_max_app.c $(HEADER)min_max.h
	$(CC) $(CFLAGS) $(SRC)min_max_app.c $(INCLUDE)
	mv min_max_app.o $(OBJ)

$(OBJ)min_max.o: $(SRC)min_max.c $(HEADER)min_max.h
	$(CC) $(CFLAGS) $(SRC)min_max.c $(INCLUDE)
	mv min_max.o  $(OBJ)

clean: 
	rm -f $(BIN)min_max
	rm -f $(OBJ)*.o



