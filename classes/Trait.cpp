#include "Trait.h"
#include <memory>

Trait::Trait(const string& tn, const string& td)
:traitName(tn), traitDescription(td)
{

}

namespace Traits
{
    const sptr<Trait> aquatic = makesptr<Trait>("Aquatic","lives in water"); // sponges live in water but cant swim, same as coral
    const sptr<Trait> keenEyes = makesptr<Trait>("Keen Eyes","very keen eyesight");
    const sptr<Trait> diurnal = makesptr<Trait>("Diurnal","Active during the daytime");
}