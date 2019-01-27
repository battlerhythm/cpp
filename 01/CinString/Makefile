CXX = g++
INCLUDES =
CXXFLAGS = -g -Wall $(INCLUDES)
LDFLAGS = -g
LDLIBS =

TARGET = CinString
OBJECTS = CinString.o

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean: 
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all
all: $(TARGET)
