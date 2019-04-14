UNAME := $(shell uname)
ifeq ($(UNAME), Darwin)
	CXX	:= clang++
else
	CXX := g++
endif

CXX_FLAGS := -Wall -Wextra -std=c++17

BIN		:= bin
SRC		:= src
INCLUDE	:= include
LIBRARIES	:= config++
EXECUTABLE	:= main


all: $(BIN)/$(EXECUTABLE)

run: clean all
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) $^ -o $@ -l$(LIBRARIES)

clean:
	-rm -f $(BIN)/*

test_example: examples/*.cpp
	clang++ -std=c++11 -Wall -I$(INCLUDE) -c examples/main.cpp -o examples/main.o
	clang++ -std=c++11 -Wall -I$(INCLUDE) -o bin/test examples/main.o examples/text-fruct.cpp && bin/test
