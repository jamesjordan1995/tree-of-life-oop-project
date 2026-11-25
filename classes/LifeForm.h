#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "Kingdom.h"
#include "Phylum.h"
#include "PhylumClass.h"
#include "Order.h"
#include "Family.h"
#include "Genus.h"
#include "Trait.h"
#include "Capability.h"

#include "typeMacros.h"

class LifeForm
{
protected:
    const Kingdom &kingdom;
    const Phylum &phylum;
    const PhylumClass &phylumClass;
    const Order &order;
    const Family &family;
    const Genus &genus;

    dynamicArray<sptr<Trait>> traits; //! no need to worry about object slicing or anything as this is not a derivative, and if we stored it as its uptr<base> it would be pretty safe from slicing anyway
    dynamicArray<sptr<Capability>> capabilities;

    string name;
    string description;

public:
    LifeForm(
        const Kingdom &k, 
        const Phylum &p, 
        const PhylumClass &pc, 
        const Order &o, 
        const Family &f, 
        const Genus &g, 
        const string &n, 
        const string &d
    );

    void Print();
};