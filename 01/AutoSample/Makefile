CXX = g++
INCLUDES =
CXXFLAGS = -g -Wall $(INCLUDES)
LDFLAGS = -g
LDLIBS =

TARGET = AutoSample
OBJECTS = AutoSample.o

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean
clean: 
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all
all: $(TARGET)
