////////////////////////////////////////////////////////////////////
// /home/doug/CLionProjects/simple.cpp 2025-08-03 13:07 dwg -     //
// This is an example of a minimum C++ client program using mwfw2 //
////////////////////////////////////////////////////////////////////

#include <iostream>
#include <ostream>

#include "mwfw2.h"

mwfw2 * gpFW;



void sine()
{
    auto* pWin = new window();
    gpSemiGr->cosmetics(
        SRUL, SRUR, SRLL, // Corner characters: ┌ ┐ └ ┘
        SRLR, SVSR, SVSL, // Right corner and separators
        SH, SV); // Horizontal ─ and vertical │ lines
    char szVersion[64];
    sprintf(szVersion, "Virtual Protocol Adapter Look Utility "
            "Ver %d.%d.%d.%d",RMAJ,RMIN,RREV,RBLD);
    pWin->set_title(szVersion);
    std::string ssCopr = "  Copyright ";
    ssCopr.append("(c)"); // Append copyright symbol for compatibility
    ssCopr.append(" 2025 Douglas Wade Goodall. All Rights Reserved.");
    pWin->add_row(ssCopr);
    pWin->render();
}

void configini(std::string ssProgram)
{
    cfgini config(gpSh->m_pShMemng->szConfigFQFS);
    if (!config.load())
    {
        config.createNew();
    }
    config.addSection("Program");
    config.setVariable("Program", "name", ssProgram);
    config.setVariable("Program", "version", RSTRING);
    config.save();
}

int main()
{

    gpFW = new mwfw2(__FILE__,__FUNCTION__);
    auto lang = "C++";
    gpSysLog->loginfo(lang);
    sine();

    cliLogin::checkPreviousLogin(gpOS->genIniFQFS());
    configini("simple");
    return EXIT_SUCCESS;
}