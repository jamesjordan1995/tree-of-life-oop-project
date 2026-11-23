#pragma once
#include <string>

#include "typeMacros.h"


class Kingdom
{
    public:
    string name;
    string description;

    Kingdom(const string& n, const string& d);
};

namespace Kingdoms
{
    extern const Kingdom AnimalKingdom;
}