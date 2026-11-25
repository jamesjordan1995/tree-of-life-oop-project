#pragma once

#include <string>
#include <memory>

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
    extern const sptr<Trait> aquatic;
}