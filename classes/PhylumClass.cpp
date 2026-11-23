#include "PhylumClass.h"

    PhylumClass::PhylumClass(const string& n, const string& d)
    :name(n), description(d)
    {

    }

namespace PhylumClasses
{
    const PhylumClass Elasmobranchii("Elasmobranchii", "Elasmobranchii is a subclass of Chondrichthyes or cartilaginous fish, including modern sharks, and batomorphs. Members of this subclass are characterised by having five to seven pairs of gill slits opening individually to the exterior, rigid dorsal fins and small placoid scales on the skin");
}