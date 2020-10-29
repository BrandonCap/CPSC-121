# Your Name
# CPSC 120-05
# Lab 5
# 2020-03-19
# Your.Email@Address.Please
#
# What does this program do? What is it's title?
#

CXX = clang++
CFLAGS += -g -Wall -pipe -std=c++17 $(INCLUDES)
LDFLAGS += -g -Wall -pipe -std=c++17

TARGET = circ-adder
# C++ Files
CXXFILES = circ-adder.cpp Circle.cpp
# Headers
HEADERS = Circle.hpp

OBJECTS = $(CXXFILES:.cpp=.o)

DEP = $(CXXFILES:.cpp=.d)

default all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $(TARGET) $(OBJECTS) $(LLDLIBS)

-include $(DEP)

%.d: %.cpp
	set -e; $(CXX) -MM $(CFLAGS) $< \
	| sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' > $@; \
	[ -s $@ ] || rm -f $@

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $<

clean:
	-rm -f $(OBJECTS) core $(TARGET).core

spotless: clean
	-rm -f $(TARGET) $(DEP)

