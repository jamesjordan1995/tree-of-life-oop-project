#pragma once

#include <string>
#include <memory>

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
    extern const sptr<Capability> swimmer;
    extern const sptr<Capability> hunter;
}