#include <iostream>
#include "part.h"

void part::operator=(const char c) {
    
    if(c=='.'||c=='O'||c=='X'){
        p=c;
    }
    else
       throw  IllegalCharException(c);

}

char part::getChar()const {
    return  p;
}

ostream& operator<<(ostream &os,part &p) {
    return os<<p.getChar();
}

 part::operator char() const{
    return getChar();
}
