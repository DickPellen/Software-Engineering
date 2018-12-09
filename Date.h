//
// Created by Dick on 10-11-2018.
//

#ifndef TRIANGLE_DATE_H
#define TRIANGLE_DATE_H
#include <iostream>

namespace std {
    class Date {
    private:
        int Jaar;
        int Maand;
        int Dag;

        const int Januari = 1;
        const int Februari = 2;
        const int Maart = 3;
        const int April = 4;
        const int Mei = 5;
        const int Juni = 6;
        const int Juli = 7;
        const int Augustus = 8;
        const int September = 9;
        const int Oktober = 10;
        const int Novemeber = 11;
        const int December = 12;

        const int JanuariMax = 31;
        const int FebruariMax = 28;
        const int MaartMax = 31;
        const int AprilMax = 30;
        const int MeiMax = 31;
        const int JuniMax = 30;
        const int JuliMax = 31;
        const int AugustusMax = 31;
        const int SeptemberMax = 30;
        const int OktoberMax = 31;
        const int NovemeberMax = 30;
        const int DecemberMax = 31;
    public:
        Date(int jaar, int maand, int dag);
        Date();
        std::string getDate();
        void addDays(int dagen);
        void subtractDays(int dagen);
    };
}

#endif //TRIANGLE_DATE_H
