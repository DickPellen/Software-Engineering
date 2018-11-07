//
// Created by Dick on 29-10-2018.
//

#include "Calculator.h"

namespace std {

    int Calculator::add(int a, int b) {
        return a + b;
    }

    int Calculator::subtract(int a, int b) {
        return a - b;
    }

    int Calculator::multiply(int a, int b) {
        return a * b;
    }

    int Calculator::divide(int a, int b) {
        return a / b;
    }

    int Calculator::square(int a) {
        return a * a;
    }
}