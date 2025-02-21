# Usefule folders
SRC_FOLDER = src/
INCLUDES_FOLDER = includes/
CODE_FOLDER = ../code/

# Exec name
TARGET = tictactoe

# Sources files
SRC = $(CODE_FOLDER)$(SRC_FOLDER)*.cpp

# Flags

# Detect OS
OS := $(shell uname)

# Set compiler based on OS
ifeq ($(OS), Darwin)
    CXX = clang++
else
    CXX = g++
endif
CXXFLAGS = -Wall -std=c++11
LDFLAGS = -lSDL2

# all rule
    all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

# clean rule
clean:
	rm -f $(TARGET)

# re rule
re: clean all
