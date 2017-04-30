# Compiler and options
CC = clang++
CC_FLAGS = -w -Wall -Werror

# File names
EXEC = project3
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

# Main target
$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC)

#Generic rule to compile source files:
%.o: %.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@


# To remove generated files
clean:
	rm -f $(EXEC) $(OBJECTS)
