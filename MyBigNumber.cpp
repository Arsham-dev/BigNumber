//
// Created by ArShAm on 5/22/2020.
//

#include "MyBigNumber.h"
#include "BigNumber.h"

MyBigNumber::MyBigNumber(const char *myCharArray)
        : BigNumber(myCharArray) {}

MyBigNumber::MyBigNumber(const std::string &str)
        : BigNumber(str) {}

MyBigNumber::MyBigNumber(const long &intNum)
        : BigNumber(intNum) {}

BigNumber MyBigNumber::operator<<(unsigned shift) {
    MyBigNumber temp;
}