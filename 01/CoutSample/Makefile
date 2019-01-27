CXX = g++
INCLUDES =
CXXFLAGS = -g -Wall $(INCLUDES)
LDFLAGS = -g
LDLIBS =

TARGET = CoutSample
OBJECTS = CoutSample.o

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean: 
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all
all: $(TARGET)
