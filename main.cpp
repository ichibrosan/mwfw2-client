////////////////////////////////////////////////////////////////////
// /home/doug/CLionProjects/simple.cpp 2025-08-03 13:07 dwg -     //
// This is an example of a minimum C++ client program using mwfw2 //
////////////////////////////////////////////////////////////////////

#include "mwfw2.h"

int main()
{
    mwfw2 * pfw = new mwfw2(__FILE__,__FUNCTION__);
    auto lang = "C++";
    gpSysLog->loginfo(lang);

    return EXIT_SUCCESS;
}