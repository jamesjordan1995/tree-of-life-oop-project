#pragma once

#include <string>

#include "typeMacros.h"

class Trait
{
    public:
    string traitName;
    string traitDescription;

    Trait(const string& tn, const string& td);
};

namespace Traits
{
    extern const Trait aquatic;
    extern const Trait swimmer;
}