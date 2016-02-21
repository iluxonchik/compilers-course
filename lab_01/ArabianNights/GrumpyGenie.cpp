#include <iostream>
#include "GrumpyGenie.h"
namespace arabiannights {
    GrumpyGenie::GrumpyGenie(int num_wishes): AbstractGenie(num_wishes) { }
    bool GrumpyGenie::grantWish() {
        if (_remaining_wishes > 0 && _granted_wishes < 1) {
            _remaining_wishes--;
            _granted_wishes++;
            return true;
        } else {
            return false;
        }
    }

    std::ostream& operator<<(std::ostream &strm, const GrumpyGenie &genie) {
        return strm << "Grumpy Genie " << ((genie.nGrantedWishes() == 1) ? "has granted a wish." : "has a wish to grant.");
    }
}