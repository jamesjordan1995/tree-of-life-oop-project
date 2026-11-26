#include "Order.h"

Order::Order(const string& n, const string& d)
    :name(n), description(d)
    {

    }

namespace Orders
{
    const Order GroundSharks("Ground Sharks","Carcharhiniformes, commonly called ground sharks, are the largest order of sharks, with over 270 species. They include a number of common types, such as cat sharks, swellsharks, and hound sharks");
    const Order Hawks("Hawks","Hawks belong to the bird order Accipitriformes, which encompasses most diurnal (day-active) birds of prey, including eagles, kites, harriers, and vultures. (Older classifications often grouped them under Falconiformes, though genetic evidence separated falcons into their own order, Falconiformes.) Sharp, hooked bills for tearing prey, fleshy nostril coverings (ceres), and strong legs with sharp talons. Exceptionally keen eyesight for spotting movement and prey from high altitudes or perches. Wide size range across the order, with females typically larger than males. Broad, rounded wings suited for soaring, gliding, or agile maneuvering, depending on the subgroup (such as forest-agile accipiters versus open-country soaring buteos). Carnivorous raptors found worldwide (except Antarctica), eating small mammals, birds, reptiles, fish, and insects across forests, grasslands, wetlands, and cliffs.");
}