//
// Created by Dick on 9-11-2018.
//

#include "Triangle.h"
#include <iostream>

namespace std{

    std::string Triangle::getTriangle(int a, int b, int c)
    {
        if (a < 1 || (b < 1 || c < 1))
            return "Wrong dimensions";
        if (a == b && b == c)
            return "Equilateral triangle";
        if (a == b || (b == c || a == c))
            return "Isosceles triangle";
        return "Other triangle";
    }


}