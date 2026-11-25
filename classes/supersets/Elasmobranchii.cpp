#include "Elasmobranchii.h"

Elasmobranchii::Elasmobranchii(const Order &o, const Family &f, const Genus &g, const string &n, const string &d)
: LifeForm(
              Kingdoms::AnimalKingdom,
              Phylums::Chordata,
              PhylumClasses::Elasmobranchii,
              o,
              f,
              g,
              n, // name
              d  // desc
          ){

          }