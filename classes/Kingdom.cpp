#include "Kingdom.h"

Kingdom::Kingdom(const string& n, const string& d)
    :name(n), description(d)
    {

    }

namespace Kingdoms
{
    const Kingdom AnimalKingdom = Kingdom("Animal", "multicellular, consumes organic matter, breathes oxygen, lack rigid cell walls, reproduces sexually");
}