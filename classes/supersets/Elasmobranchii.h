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

#include "typeMacros.h"

class Elasmobranchii : public LifeForm
{
public:
    Elasmobranchii(const Order &o, const Family &f, const Genus &g, const string &n, const string &d);
        
};