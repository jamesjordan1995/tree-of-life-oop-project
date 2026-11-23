#pragma once

#include <string>

#include "typeMacros.h"

class Capability
{
    public:
    string capabilityName;
    string capabilityDescription;

    Capability(const string& cn, const string& cd);
};

namespace Capabilities
{
    extern const Capability swimmer;
}