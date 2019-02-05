CXX = g++
CSTD = c++11
INCLUDES =
CXXFLAGS = -std=$(CSTD) -g -Wall $(INCLUDES)
LDFLAGS = -g
LDLIBS =

TARGET = ExpDefaultConstructor
OBJECTS = ExpDefaultConstructor.o

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean: 
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all
all: $(TARGET)
