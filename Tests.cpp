//
// Created by Dick on 9-11-2018.
//

#include "Date.h"
#include "Triangle.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using testing::Eq;

namespace {
    class Classdeclaration : public testing::Test{
    public:
        std::Triangle obj;
        std::Date date;
        Classdeclaration(){
            obj;
            date;
        }
    };
}

TEST_F(Classdeclaration, SimpleWrongTriangle){
    ASSERT_EQ("Wrong dimensions", obj.getTriangle(5,2, -1));
}

TEST_F(Classdeclaration, SimpleOtherTriangle){
    ASSERT_EQ("Other triangle", obj.getTriangle(5, 2, 4));
}

TEST_F(Classdeclaration, SimpleIsoscelesTriangle){
    ASSERT_EQ("Isosceles triangle", obj.getTriangle(10,30, 10));
}

TEST_F(Classdeclaration, SimpleEquilateralTriangle){
    ASSERT_EQ("Equilateral triangle", obj.getTriangle(8,8,8));
}

TEST_F(Classdeclaration, StartGetDate){
    ASSERT_EQ("1-1-2018", date.getDate());
}

TEST_F(Classdeclaration, SimpleAddDate){
    date.addDays(31);
    ASSERT_EQ("1-2-2018", date.getDate());
}

TEST_F(Classdeclaration, SimpleSubtractDate){
    date.subtractDays(1);
    ASSERT_EQ("31-12-2017", date.getDate());
}

TEST_F(Classdeclaration, SubtractYearDate){
    date.subtractDays(365);
    ASSERT_EQ("1-1-2017", date.getDate());
}

TEST_F(Classdeclaration, AddYearDate){
    date.addDays(365);
    ASSERT_EQ("1-1-2019", date.getDate());
}
