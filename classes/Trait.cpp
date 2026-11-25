#include "Trait.h"
#include <memory>

Trait::Trait(const string& tn, const string& td)
:traitName(tn), traitDescription(td)
{

}

namespace Traits
{
    const sptr<Trait> aquatic = makesptr<Trait>("Aquatic","lives in water"); // sponges live in water but cant swim, same as coral
}