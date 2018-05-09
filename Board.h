using namespace std;
#include <iostream>
#include "vector"
#include "part.h"
#include "IllegalCoordinateException.h"
#include "IllegalCharException.h"

class Board {
    
public:

    part** board;
    int size;
    
    Board(int size);
    Board(const Board& b);
    ~Board();
    
    part& operator[]( vector<int> v);
    Board& operator=(const Board& b);
    Board& operator=(char c);
   
    friend ostream& operator<< (ostream& os, const Board& b);
   
};

