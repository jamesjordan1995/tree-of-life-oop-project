#include "Phylum.h"


    Phylum::Phylum(const string& n, const string& d)
    : name(n), description(d)
    {

    }

namespace Phylums
{
    const Phylum Chordata("Chordata", "Animals belong to the phylum Chordata if they possess five key anatomical features at some point during their embryonic, larval, or adult life cycle: a notochord, a hollow dorsal nerve cord, pharyngeal slits (or pouches), an endostyle (or thyroid gland), and a post-anal tail");
}