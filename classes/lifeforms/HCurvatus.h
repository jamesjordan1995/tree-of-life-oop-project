#include <string>
#include <cstring>

#include "LifeForm.h"
#include "Kingdom.h"
#include "Phylum.h"
#include "PhylumClass.h"
#include "Order.h"
#include "Family.h"
#include "Genus.h"

#include "Trait.h"
#include "Capability.h"

#include "Elasmobranchii.h"

#include "typeMacros.h"

class HCurvatus : public LifeForm
{
public:
    HCurvatus();
};

class ElasmobranchiiHCurvatus : public Elasmobranchii
{
    public:
    ElasmobranchiiHCurvatus();
};