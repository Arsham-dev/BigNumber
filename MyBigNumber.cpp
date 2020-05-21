//
// Created by ArShAm on 5/22/2020.
//

#include "MyBigNumber.h"
#include "BigNumber.h"
using namespace std;
MyBigNumber::MyBigNumber(const char *myCharArray)
        : BigNumber(myCharArray) {}

MyBigNumber::MyBigNumber(const std::string &str)
        : BigNumber(str) {}

MyBigNumber::MyBigNumber(const long &intNum)
        : BigNumber(intNum) {}

BigNumber MyBigNumber::operator<<(unsigned shift) {
    MyBigNumber temp;
}

std::string MyBigNumber::to_string() const {
    string num = "";
    for (int i = this->numOfDigits - 1; i >= 0; --i) {
        num += (int8_t) (this->numArray[i] + 48);
    }
    return num;
}

BigNumber MyBigNumber::multByOneDigit(BigNumber bigNumber, int i) {
    BigNumber temp = *new BigNumber(bigNumber);
    for (int j = 1; j < i; ++j) {
        bigNumber += temp;
    }
    if (i < 0)
        bigNumber.setSign(bigNumber.getSign());
    return bigNumber;
}
