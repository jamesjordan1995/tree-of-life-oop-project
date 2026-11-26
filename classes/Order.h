#pragma once
#include <string>

#include "typeMacros.h"

class Order
{
    public:
    string name;
    string description;

    Order(const string& n, const string& d);
};

namespace Orders
{
    extern const Order GroundSharks;
    extern const Order Hawks;
}