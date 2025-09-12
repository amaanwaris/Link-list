#! /bin/bash

CC=gcc
CF=-c -Wall -Wextra
DF=-DDEBUG
#list of source files
SRC_FILES = main.c init.c mainMenu.c exitProgram.c creatLinklist.c insertNode.c deleteNode.c displayLinklist.c sortLinklist.c rotateLinklist.c

#list of object files

OBJ_FILES = $(SRC_FILES:.c=.o)

sll: $(OBJ_FILES)
	${CC} -o sll $(OBJ_FILES)

#Rule to build object files form source files
%.o: %.c header.h DS.h declaration.h
	${CC} ${CF} ${DF} $<
clean:
	rm *.o
	rm sll
