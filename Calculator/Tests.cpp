//
// Created by Dick on 26-10-2018.
//

#include "Calculator.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using testing::Eq;

namespace {
class Classdeclaration : public testing::Test{
public:
    std::Calculator obj;
        Classdeclaration(){
            obj;
        }
    };
}

TEST_F(Classdeclaration, SimpleAddTest){
    ASSERT_EQ(7, obj.add(5,2));
}

TEST_F(Classdeclaration, SimpleSquareTest){
    ASSERT_EQ(25, obj.square(5));
}

TEST_F(Classdeclaration, SimpleSubtractTest){
    ASSERT_EQ(-20, obj.subtract(10,30));
}

TEST_F(Classdeclaration, SimpleMultiplyTest){
    ASSERT_EQ(512, obj.multiply(64,8));
}

TEST_F(Classdeclaration, SimpleDivideTest){
    ASSERT_EQ(27, obj.divide(81,3));
}