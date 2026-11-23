#pragma once
#include <string>

#include "typeMacros.h"

class Phylum
{
    public:
    string name;
    string description;


    // constructor/s, destructor, copy constructor
    Phylum(const string& n, const string& d);
};

namespace Phylums
{
    extern const Phylum Chordata;
}