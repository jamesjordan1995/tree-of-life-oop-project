#include "HCurvatus.h"

HCurvatus::HCurvatus()
        : LifeForm(
              Kingdoms::AnimalKingdom,
              Phylums::Chordata,
              PhylumClasses::Elasmobranchii,
              Orders::GroundSharks,
              Families::WeaselSharks,
              Genuses::Hemipristis,
              "Hemipristis Curvatus",
              "This is an extinct species of weasel shark which existed during the Eocene epoch. It was described by Dames in 1883."
            )
    {
        traits.push(Traits::aquatic); // on instanciation, append traits to vector
        capabilities.push(Capabilities::swimmer);
    }