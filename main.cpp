#include <iostream>
#include <cstdint>

#include "BigNumber.h"
#include "MyBigNumber.h"

using namespace std;

int main() {
    cout << boolalpha;

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
    BigNumber myBig1 = -17319;
    BigNumber myBig2 = "0000173";
    //cout << BigNumber::unsignedLessOrEqual(myBig1, myBig2) << endl;
    //BigNumber a = BigNumber::unsignedSubtract(myBig1, myBig2);
    //  cout << (myBig1>>3) << "\t" << (myBig1>>3).getSign() << endl;
//    try{
//        cout << BigNumber::unsignedSubtract(myBig1, myBig2) << endl;
//    }
//    catch( out_of_range e){
//        cout << e.what() << endl;
//    }
    MyBigNumber myBigNumber1 = "1234567890";
    MyBigNumber myBigNumber2 ="12334";
    MyBigNumber myBigNumber3=myBigNumber1/myBigNumber2;
    cout<<myBigNumber3;
    //cout << myBigNumber2;

    return 0;
}
