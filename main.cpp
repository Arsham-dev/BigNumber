#include <iostream>
#include "BigNumber.h"
#include "MyBigNumber.h"

using namespace std;

int main() {
    //  cout << boolalpha;

//    for(unsigned char i{0}; i <= 127; ++i){
//        std::cout << (int) i << '\t' << i << std::endl;
//    }
    //std::cout << x << std::endl;
//    BigNumber x{-37};
//    string str = "-0000";
//    BigNumber y{str};
//    cout << y << endl;
//    cout << "Enter a number: ";
//    cin >> x;
//    x = -y;
//    BigNumber z = -y;
//    cout << (x != y) << endl;
    // BigNumber myBig1 = -17319;
    //  BigNumber myBig2 = "0000173";
    //cout << BigNumber::unsignedLessOrEqual(myBig1, myBig2) << endl;
    //BigNumber a = BigNumber::unsignedSubtract(myBig1, myBig2);
    //  cout << (myBig1>>3) << "\t" << (myBig1>>3).getSign() << endl;
//    try{
//        cout << BigNumber::unsignedSubtract(myBig1, myBig2) << endl;
//    }
//    catch( out_of_range e){
//        cout << e.what() << endl;
//    }
    MyBigNumber myBigNumber1("1225349821002");
    MyBigNumber myBigNumber2("9433025");
    cout << myBigNumber1 - myBigNumber2 << endl;
    cout << myBigNumber1-- << endl;
    cout << --myBigNumber1 << endl;
    cout << myBigNumber2++ << endl;
    cout << ++myBigNumber2 << endl;
    cout << MyBigNumber::multByOneDigit(myBigNumber2, 5) << endl;
    cout << (myBigNumber1 << 3) << endl;
    MyBigNumber myBigNumber3 = myBigNumber1 * myBigNumber2;
    cout << myBigNumber3 << endl;
    cout << MyBigNumber::power(myBigNumber2, 4) << endl;
    cout << myBigNumber3(myBigNumber3.getNumOfDigits() - 5, 10) << endl;
    MyBigNumber myBigNumber4 = myBigNumber1 / myBigNumber2;
    cout << myBigNumber4 << endl;
    MyBigNumber myBigNumber5 = myBigNumber3 % myBigNumber4;
    cout << myBigNumber5 << endl;

    return 0;
}