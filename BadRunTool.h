#ifndef __YIGE_BAD_RUN_UTIL__
#define __YIGE_BAD_RUN_UTIL__

#include <unordered_map>
#include <iostream>
#include <fstream>
#include <string>
#include "TMath.h"

class BadRunTool {
    /*
        Quick Guide
        
        BadRunTool* mtBadRun = new BadRunTool();
        while (run loop) {
            ...
            if (brcker->isBadRun(runID)) {
                continue;
            }
            ...
        }
        
    */

    private:
        unordered_map<Int_t, Int_t> runList; // bad run list

    public:
        BadRunTool();
        ~BadRunTool(){}

        bool isBadRun(Int_t runid);
};

#endif