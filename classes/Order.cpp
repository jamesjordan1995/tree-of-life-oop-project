#include "Order.h"

Order::Order(const string& n, const string& d)
    :name(n), description(d)
    {

    }

namespace Orders
{
    const Order GroundSharks("Ground Sharks","Carcharhiniformes, commonly called ground sharks, are the largest order of sharks, with over 270 species. They include a number of common types, such as cat sharks, swellsharks, and hound sharks");
}