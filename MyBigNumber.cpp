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


BigNumber MyBigNumber::multByOneDigit(BigNumber bigNumber, int i) {
    BigNumber temp = *new BigNumber(bigNumber);
    for (int j = 1; j < i; ++j) {
        bigNumber += temp;
    }
    if (i < 0)
        bigNumber.setSign(bigNumber.getSign());
    return bigNumber;
}

MyBigNumber &MyBigNumber::operator<<(unsigned shift) {
    string num = "";
    if (!this->sign) {
        num += '-';
    }
    num += this->to_string();
    for (int k = 0; k < shift; ++k) {
        num += '0';
    }
    MyBigNumber ans(num);
    *this = ans;
    return *this;
}

MyBigNumber::MyBigNumber(const BigNumber &number) {
    number.to_string();
    MyBigNumber(str);
}

MyBigNumber operator*(const MyBigNumber &num1, const MyBigNumber &num2) {
    string num = num2.to_string();

    MyBigNumber ans = *new MyBigNumber("0");
    for (int i = 0; i < num.size(); ++i) {
        if (num.at(i) - 48 != 0) {
            MyBigNumber temp = *new MyBigNumber(num1);
            for (int j = 1; j < num.at(i) - 48; ++j) {
                temp += num1;
            }
            temp << (int) num.size() - i - 1;ans += temp;
        }
    }


    return ans;

}

