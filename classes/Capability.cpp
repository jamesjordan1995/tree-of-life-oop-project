#include "Capability.h"

Capability::Capability(const string& cn, const string& cd)
:capabilityName(cn), capabilityDescription(cd)
{

}

namespace Capabilities
{
    const Capability swimmer("swimmer","can swim"); // land/air dwelling animals can swim but dont live there
}