#pragma once
#include <string>

#include "typeMacros.h"

class PhylumClass
{
    public:
    string name;
    string description;

    PhylumClass(const string& n, const string& d);
};

namespace PhylumClasses
{
    extern const PhylumClass Elasmobranchii;
    extern const PhylumClass Birds;
}