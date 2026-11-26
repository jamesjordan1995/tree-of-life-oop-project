#pragma once
#include <string>

#include "typeMacros.h"

class Family
{
    public:
    string name;
    string description;

    Family(const string& n, const string& d);
};

namespace Families
{
    extern const Family WeaselSharks;
    extern const Family NewWorldVultures;
}