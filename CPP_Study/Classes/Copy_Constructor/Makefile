# Compiler
CXX = g++
# Compiler flags
CXXFLAGS = -Wall -std=c++20
# Source files
SRCS = $(wildcard *.cpp)
# Output executable
TARGET = main.exe

# Default target: build the .exe directly from .cpp files
all:
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Clean target to remove the .exe
clean:
	del /Q $(TARGET)
