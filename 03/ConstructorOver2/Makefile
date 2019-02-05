CXX = g++
CSTD = c++11
INCLUDES =
CXXFLAGS = -std=$(CSTD) -g -Wall $(INCLUDES)
LDFLAGS = -g
LDLIBS =

TARGET = ConstructorOver2
OBJECTS = ConstructorOver2.o

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean: 
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all
all: $(TARGET)
