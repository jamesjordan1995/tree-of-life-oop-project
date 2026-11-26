#include "DHatcheri.h"


    DHatcheri::DHatcheri()
    :LifeForm(Kingdoms::AnimalKingdom,Phylums::Chordata,PhylumClasses::Birds,Orders::Hawks,Families::NewWorldVultures,Genuses::Dryornis,"D. Hatcheri","An extinct species of giant New World vulture (family Cathartidae) that lived in Patagonia, Argentina, during the Early Miocene epoch. Paleontologist John Bell Hatcher collected the holotype—a fragmentary left humerus—in 1899 from the Santa Cruz Formation. For decades, it was mistakenly attributed to the flightless 'terror bird' Phorusrhacos, until Argentine paleontologist Federico J. Degrange re-examined the fossil and formally named it a new species of Dryornis in 2022.  The genus Dryornis represents the largest known New World vultures outside of the extinct teratorns. Based on related species in the genus (D. pampeanus), these massive scavengers weighed up to 26 kg (roughly 50\% heavier than a modern Andean condor) with wingspans reaching around 4 meters.")
    {
        traits.push(Traits::keenEyes);
        traits.push(Traits::diurnal);    

        capabilities.push(Capabilities::flight);
        capabilities.push(Capabilities::hunter);
    } 