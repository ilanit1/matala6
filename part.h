class part {
    
public:

char p;

    char getChar()const;
    
    void operator=(char c);
    operator char() const ;
    
    friend ostream& operator << (ostream& os, part& p);

};

