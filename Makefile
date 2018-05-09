CXX=clang++-5.0
CXXFLAGS=-std=c++17
all: Board.o part.o IllegalCoordinateException.o IllegalCharException.o
Board.o: Board.cpp Board.h part.h
	$(CXX) $(CXXFLAGS) -c  Board.cpp -o Board.o
	
part.o: part.cpp part.h Board.h
	$(CXX) $(CXXFLAGS) -c  Piece.cpp -o Piece.o
	
IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.h
	$(CXX) $(CXXFLAGS) -c  IllegalCoordinateException.cpp -o IllegalCoordinateException.o
	
IllegalCharException.o: IllegalCharException.cpp IllegalCharException.h
	$(CXX) $(CXXFLAGS) -c  IllegalCharException.cpp -o IllegalCharException.o

clean:
	rm *.o  
