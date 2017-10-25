ifeq ("$(shell whoami)", "malloy")
  CXX = clang++
else
  CXX = g++
endif

# Warnings frequently signal eventual errors:
CXXFLAGS=`sdl-config --cflags` -g -W -Wall -Weffc++ -Wextra -pedantic -O0

ifeq ("$(shell uname)", "Darwin")
  LDFLAGS = -framework Foundation -framework GLUT -framework OpenGL -lm
else
  ifeq ("$(shell uname)", "Linux")
  LDFLAGS = `sdl-config --libs` -lm -lSDL_ttf -lSDL_image -lexpat
  endif
endif

OBJS = \
	main.o \
	vector2f.o \
	shape.o \
	visitor.o
EXEC = run

# $< refers to the first dependency
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# $@ refers to the target
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $(LDFLAGS)

vector2f.o: vector2f.cpp vector2f.h 
shape.o: shape.cpp shape.h visitor.h
visitor.o: visitor.cpp visitor.h shape.h
main.o: main.cpp shape.h visitor.h

clean:
	rm -rf $(OBJS)
	rm -rf $(EXEC)
