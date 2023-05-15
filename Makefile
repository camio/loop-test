.PHONY: clean

CXX = clang++
CXXFLAGS = -O3

test.s : test.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -S -masm=intel -c test.cpp

clean:
	$(RM) test.s
