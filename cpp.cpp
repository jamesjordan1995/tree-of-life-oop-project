// headers/includes
#include <string>
#include <cstring>

#include "LifeForm.h"
#include "HCurvatus.h"

#include "typeMacros.h"

// static vars; only used in this file, static to lessen conflicts

// static functions; only used in this file, static to lessen conflicts; if small enough then inline

// global vars

// global functions

// classes/structs

int main(){
    HCurvatus hc = HCurvatus();
    
    hc.Print();

    LifeForm ehc = ElasmobranchiiHCurvatus(); //multilevel inherited LifeForm > Elasmobranchii > ElasmobranchiiHCurvatus; instantiated to base class LifeForm(base of Elasmobranchii) where Elasmobranchii is the base of ElasmobranchiiHCurvatus; so the grandchild is instanciated to the grandparent

    ehc.Print();
}