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


MyBigNumber MyBigNumber::multByOneDigit(const MyBigNumber &bigNumber, int j) {
    MyBigNumber sum("0");
    for (int i = 0; i < abs(j); ++i) {
        sum = sum + bigNumber;
    }
    if(j<0)
        sum.setSign(!sum.getSign());
    return sum;
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

MyBigNumber operator*(const MyBigNumber &num1, const MyBigNumber &num2) {
    MyBigNumber ans("0");
    for (int i = 0; i < num2.getNumOfDigits(); ++i) {
        if (num2[i] != 0) {
            MyBigNumber temp;
            temp = MyBigNumber::multByOneDigit(num1, num2[i]);
            temp << i;
            ans += temp;
        }
    }
    ans.setSign(num1.getSign() == num2.getSign());
    return ans;

}

MyBigNumber &MyBigNumber::operator*=(const MyBigNumber &myBigNumber) {

    *this = *this * myBigNumber;
    return *this;
}

MyBigNumber MyBigNumber::power(MyBigNumber bigNumber, unsigned pow) {
    MyBigNumber ans = bigNumber;
    if (pow == 0) {
        ans = "1";
        return ans;
    } else {
        for (int j = 1; j < pow; ++j) {
            ans *= bigNumber;
        }
        return ans;
    }
}

MyBigNumber MyBigNumber::operator()(unsigned first, unsigned loop) {
    string str = "";
    for (int i = 0; i < loop; ++i) {
        str += ::to_string(this->numArray[first - i]);
    }
    MyBigNumber ans = str;
    return ans;
}

