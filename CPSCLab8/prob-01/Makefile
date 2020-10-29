# Your Name
# CPSC 12X-XX
# Lab XX
# 2020-xx-xx
# Your.Email@Address.Please
#
# What does this program do? What is it's title?
#

CXX = clang++
CFLAGS += -g -Wall -pipe -std=c++17 $(INCLUDES)
LDFLAGS += -g -Wall -pipe -std=c++17

TARGET = volume-finder
# C++ Files
CXXFILES = Cone.cpp Cylinder.cpp Shape.cpp Sphere.cpp volume-finder.cpp
# Headers
HEADERS = Cone.cpp Cylinder.hpp Shape.hpp Sphere.hpp

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

