.PHONY: clean

UNAME:=$(shell uname)

# Declaring the compiler flags for debug and errors
CFLAGS=-std=c++14 -O3 -g
# -pedantic -Wall -Wextra -Werror -Wshadow -Wconversion -Wunreachable-code
# -mcpu=apple-m1
# MacOS flags
ifeq ($(UNAME), Darwin)
	CC=c++
endif

# Linux flags
ifeq ($(UNAME), Linux)
	CC=g++
endif

# Declering the directories
SRC=src
OBJ=obj
BINDIR=bin
BIN=$(BINDIR)/DBproject

SRCS=$(wildcard $(SRC)/*.cpp)
OBJS=$(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))

all:  $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(BINDIR)/* $(OBJ)/*

fly:
	./$(BIN)
