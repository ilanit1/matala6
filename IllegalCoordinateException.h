using namespace std;
#include <string>
#pragma once

class IllegalCoordinateException {

public:

    int x;
    int y;

    string theCoordinate()const;
    IllegalCoordinateException(int z,int w);
};


