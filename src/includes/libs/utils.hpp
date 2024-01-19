#ifndef UTILS_HPP
#define UTILS_HPP

#include "types.hpp"

class Utils 
{
  public:
    static uint32 strlen(const char* str);
    static uint32 digit_count(int num);
    static void itoa(int num, char *number);
};

#endif

