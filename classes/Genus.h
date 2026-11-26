#pragma once

#include <string>

#include "typeMacros.h"

class Genus
{
    public:
    string name;
    string description;

    Genus(const string& n, const string& d);
};

namespace Genuses
{
    extern const Genus Hemipristis;
    extern const Genus Dryornis;
}