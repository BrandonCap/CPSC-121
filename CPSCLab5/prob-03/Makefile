# Your Name
# CPSC 121-XX
# Lab-XX, prob-XX
# 2020-XX-XX
# your.email@csu.fullerton.edu
# 
# What is this Makefile for? What does it do?
#

CXX = clang++
CFLAGS += -g -Wall -pipe -std=c++17 $(INCLUDES)
LDFLAGS += -g -Wall -pipe -std=c++17

TARGET = citysolver
# C++ Files
CXXFILES = prob-03-main.cpp LatLon.cpp
# Headers
HEADERS = LatLon.hpp

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

