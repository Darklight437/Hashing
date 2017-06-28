#pragma once

#include <functional>

namespace HashFunction
{
    typedef std::function<unsigned int(const char*, unsigned int)> HashFunc;

    //test bad hash
    unsigned int badHash(const char* data, unsigned int length);

    //better hash function here

    unsigned int  hashSDBM(const char*, unsigned int length);



    static HashFunc default = badHash;

}