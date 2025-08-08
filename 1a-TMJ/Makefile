CC = x86_64-w64-mingw32-g++
COMPILER_FLAGS = -std=c++20 -Wall -O0 -g

#this is supposed to show the errors
#not working for some reason, told me to put a # at the end of c++, i put 03


#TODO , learn this;
LDFLAGS = `sdl2-config --cflags --libs`

#pretty straight forward
SRC = src/main.cpp
#had to add .exe to game
OUT = bin/game.exe

#TODO, learn this also,
all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT) $(LDFLAGS)

clean:
	rm -f $(OUT)
#dear god i hope this works...
#dude i put this in src/ and couldnt figure out wtf was going on
#update; does not work , says cant run on this pc ... maybe a version error ? checking the mingw sht next
#TODO learn linking

