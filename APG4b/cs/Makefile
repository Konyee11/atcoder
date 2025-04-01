CXX = g++-12
CXXFLAGS = -std=gnu++20 -Wall -Wextra -O2 -I../include

SRC = main.cpp
BIN = main
IN  = stdin.txt

all: $(BIN)

$(BIN): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(BIN) $(SRC)

run: $(BIN)
	./$(BIN) < $(IN)

norun: $(BIN)
	./$(BIN)

clean:
	rm -f $(BIN)
