//
// Created by ArShAm on 5/22/2020.
//

#ifndef TA14_MYBIGNUMBER_H
#define TA14_MYBIGNUMBER_H

#include "BigNumber.h"

#include <string>

class MyBigNumber : public BigNumber {
public:
    MyBigNumber() { BigNumber("0"); }

    MyBigNumber(const char *myCharArray);

    MyBigNumber(const std::string &str);

    MyBigNumber(const long &intNum);

    MyBigNumber(const BigNumber &number);

    static MyBigNumber multByOneDigit(const MyBigNumber &bigNumber, int i);

    MyBigNumber &operator<<(unsigned shift);

    friend MyBigNumber operator*(const MyBigNumber &num1, const MyBigNumber &num2);

    MyBigNumber &operator*=(const MyBigNumber &myBigNumber);

    static MyBigNumber power(MyBigNumber bigNumber, unsigned pow);

    MyBigNumber operator()(int first, int loop);

};


#endif //TA14_MYBIGNUMBER_H
