# Usefule folders
SRC_FOLDER = src/
INCLUDES_FOLDER = includes/
CODE_FOLDER = ../code/

# Exec name
TARGET = tictactoe

# Sources files
SRC = $(CODE_FOLDER)$(SRC_FOLDER)*.cpp

# Flags
CXX = g++
CXXFLAGS = -Wall -g
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
