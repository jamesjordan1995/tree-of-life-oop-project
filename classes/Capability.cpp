#include "Capability.h"
#include <memory>

Capability::Capability(const string& cn, const string& cd)
:capabilityName(cn), capabilityDescription(cd)
{

}

namespace Capabilities
{
    const sptr<Capability> swimmer = makesptr<Capability>("swimmer","can swim"); // land/air dwelling animals can swim but dont live there
}