#include "IllegalCharException.h"
#include "IllegalCoordinateException.h"
#include "Board.h"
using namespace std;


Board::Board(int s) {
    
    size = s;
	board = new part* [size];

	for (int i=0; i<size; i++){
    	board[i] = new part[size];
    	for(int j = 0 ; j < size ; j++){
    		board[i][j]='.';
    	}
   }
}

Board::Board(const Board &b) {
    
    size=b.size;
    board=new part*[size];
    
    for (int i = 0; i < size; ++i) {
        board[i] = new part[size];
    }
    for (int i = 0; i <size ; ++i) {
        for (int j = 0; j < size; ++j) {
            board[i][j]=b.board[i][j].getChar();
        }
    }
}

Board::~Board(){
    
    for (int i = 0; i <size ; ++i) {
            delete board[i];
    }
    delete board;

}

Board& Board::operator=(char c) {
    
    if(c=='X'||c=='O'||c=='.'){
        for (int i = 0; i <size ; ++i) {
            for (int j = 0; j < size; ++j) {
                board[i][j]=c;
            }
        }
    }
    else
       throw IllegalCharException(c);
    
    return *this;
}

Board& Board::operator=(const Board& b) {
    
    this->~Board();
    size=b.size;
    this->board=new part*[size];
    
    for (int i = 0; i < size; ++i) {
        board[i] = new part[size];
    }
    for (int i = 0; i <size ; ++i) {
        for (int j = 0; j < size; ++j) {
            board[i][j]=b.board[i][j].getChar();
        }
    }
    return *this;
}

part& Board::operator[](  vector<int> v) {
    
    if(0<=v.at(1)&&v.at(1)<size&&0<=v.at(0)&&v.at(0)<size) {
        return board[v.at(0)][v.at(1)];
    }
    else {
        throw IllegalCoordinateException(v.at(0),v.at(1));
    }
}


ostream& operator<< (ostream& os, const Board& b){
    
    for (int i = 0; i <b.size ; ++i) {
        for (int j = 0; j <b.size ; ++j) {
            os<<(b.board[i][j].getChar());
        }
        os<<""<<endl;
    }
    return os;
}
