# Your Name
# CPSC 120-05
# Midterm
# 2020-03-19
# Your.Email@Address.Please
#
# What does this program do? What is it's title?
#

CXX = clang++
CFLAGS += -g -Wall -pipe -std=c++17 $(INCLUDES)
LDFLAGS += -g -Wall -pipe -std=c++17

TARGET = area-finder
# C++ Files
CXXFILES = Octagon.cpp Polygon.cpp Triangle.cpp area-finder.cpp
# Headers
HEADERS = Octagon.hpp Polygon.hpp Triangle.hpp

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

