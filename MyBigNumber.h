//
// Created by ArShAm on 5/22/2020.
//

#ifndef TA14_MYBIGNUMBER_H
#define TA14_MYBIGNUMBER_H

#include "BigNumber.h"

#include <string>

class MyBigNumber: public BigNumber {
public:
    MyBigNumber (){}
    MyBigNumber (const char * myCharArray);
    MyBigNumber( const std::string & str );
    MyBigNumber(const long & intNum );
    BigNumber operator<<(unsigned shift );
    std::string to_string() const;

};


#endif //TA14_MYBIGNUMBER_H
