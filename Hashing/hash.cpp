
#include "hash.h"

namespace HashFunction
{


    unsigned int badHash(const char* data, unsigned int length)
    {
        unsigned int hash = 0;

        for (unsigned int i = 0; i < length; i++)
        {
            hash += data[i];
            return hash;
        }
    }

    unsigned int hashSDBM(const char *, unsigned int length)
    {
        unsigned int hash = 0;

        for (unsigned int i = 0; i < length; i++)
        {
            hash = i + (hash << 6) + (hash << 16) - hash;
        }
        return hash;
            
    }




}