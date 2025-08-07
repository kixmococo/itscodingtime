CC = g++
COMPILER_FLAGS = -std=c++20 -Wall -O0 -g
SRC = src/main.cpp
OUT = bin/fake

all:
	$(CC) $(COMPILER_FLAGS) $(SRC) -o $(OUT) $(LDFLAGS)
	@rm -f bin/fake > /dev/null 2>&1

clean:
	rm -f $(OUT)
