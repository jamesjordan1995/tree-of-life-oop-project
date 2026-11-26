#include "Family.h"

    Family::Family(const string& n, const string& d)
    :name(n), description(d)
    {

    }

namespace Families
{
    const Family WeaselSharks("Weasel Sharks","The weasel sharks are a family, the Hemigaleidae, of ground sharks found from the eastern Atlantic Ocean to the continental Indo-Pacific. They are found in shallow coastal waters to a depth of 100 m. Most species are small, reaching no more than 1.4 m long, though the snaggletooth shark may reach 2.4 m");
    const Family NewWorldVultures("New World Vultures","New World vultures belong to the family Cathartidae, a group of seven living scavenging bird species—including vultures and condors—native to North, Central, and South America. Unlike Old World vultures (family Accipitridae), they do not form a single clade with them, sharing similar traits through convergent evolution.");
}