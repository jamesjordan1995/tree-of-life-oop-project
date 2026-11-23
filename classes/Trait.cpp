#include "Trait.h"

Trait::Trait(const string& tn, const string& td)
:traitName(tn), traitDescription(td)
{

}

namespace Traits
{
    const Trait aquatic("Aquatic","lives in water"); // sponges live in water but cant swim, same as coral
    const Trait swimmer("swimmer","can swim"); // land/air dwelling animals can swim but dont live there
}