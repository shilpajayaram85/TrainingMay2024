 CC = gcc
 CFLAGS = -Wall -c -g
 LDFLAGS = -o

 INC = ./include
 SRC = ./src
 OBJ = ./obj
 BIN = ./bin

 IFLAGS = -I $(INC)

 calc: $(OBJ)/mainfile.o $(OBJ)/functions.o
	$(CC) $(LDFLAGS) $(BIN)/calc $(OBJ)/mainfile.o $(OBJ)/functions.o
  $(OBJ)/mainfile.o: $(SRC)/mainfile.c
	$(CC) $(CFLAGS) $(IFLAGS) $(SRC)/mainfile.c
	mv *.o $(OBJ)
  $(OBJ)/functions.o: $(SRC)/functions.c
	$(CC) $(CFLAGS) $(IFLAGS) $(SRC)/functions.c
	mv *.o $(OBJ)
clean:
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	echo "Cleaning Done!"
