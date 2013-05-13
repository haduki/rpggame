#RPGgame

CXX = g++
CXXFLAGS = -Wall -g
SRCS = mainGame.cpp player1.cpp event1.cpp uraburetabar.cpp
OBJS = mainGame.o player1.o event1.o uraburetabar.o
PROGRAM = rpggame


$(PROGRAM): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(PROGRAM)

$(OBJS):	$(SRCS)
	$(CXX) -c $(SRCS)

clean:
	rm -f *.o $(PROGRAM)
