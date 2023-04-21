# compilateur
CC=g++

# flag
CFLAGS=-Wall

# executable
EXEC=contacts

# stock tous les fichiers .c dans SRC
SRC=$(wildcard *.cpp)

# creer le nom des fichiers .o a venir et les stock dans OBJ
OBJ=$(SRC:.cpp=.o)


$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)


%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)


clean:
	rm -rf $(OBJ)

mrproper: clean 
	rm -rf $(EXEC)