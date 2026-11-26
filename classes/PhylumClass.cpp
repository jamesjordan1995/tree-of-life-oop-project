#include "PhylumClass.h"

    PhylumClass::PhylumClass(const string& n, const string& d)
    :name(n), description(d)
    {

    }

namespace PhylumClasses
{
    const PhylumClass Elasmobranchii("Elasmobranchii", "Elasmobranchii is a subclass of Chondrichthyes or cartilaginous fish, including modern sharks, and batomorphs. Members of this subclass are characterised by having five to seven pairs of gill slits opening individually to the exterior, rigid dorsal fins and small placoid scales on the skin");
    const PhylumClass Birds("Birds","Birds are a group of warm-blooded vertebrate animals constituting the class Aves, characterised by feathers, toothless beaked jaws, the laying of hard-shelled eggs, a high metabolic rate, a four-chambered heart, and a strong yet lightweight skeleton that retains dinosaur-like characteristics. Birds live worldwide and range in size from the 5.5 cm (2.2 in) bee hummingbird to the 2.8 m (9 ft 2 in) common ostrich. There are over 11,000 living species and they are split into 44 orders. More than half of the world's bird species are passerine or 'perching' birds. Nearly all birds have wings whose development varies according to the life style of each species. Wings, which are modified forelimbs, gave birds the ability to fly, although further evolution has led to the loss of flight in some birds, including ratites, penguins, and diverse endemic island species. The only known groups without wings are the extinct moa and elephant birds. Birds are the only extant members of Dinosauria, and are a type of paravian theropods. The digestive and respiratory systems of birds are also uniquely adapted for flight. Some bird species of aquatic environments, particularly seabirds and some waterbirds, have further evolved for swimming. The study of birds is called ornithology.");
}