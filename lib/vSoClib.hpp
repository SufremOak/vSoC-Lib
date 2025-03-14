#ifndef VSOCLIB_HPP
#define VSOCLIB_HPP

#include <iostream>
#include <string>
#include <cstring>

// built-in classes
class klIOClass()
{
    #define MAX_IOSET 200
    #define BASE_IONAME "IO"
    #define stdLib "SoCStd.h"
}

// define macros

#define klIO() klIOClass()


void NewSoC();

#endif // VSOCLIB_HPP