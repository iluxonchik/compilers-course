#include <iostream>
#include "FriendlyGenie.h"
namespace arabiannights {
    FriendlyGenie::FriendlyGenie(int num_wishes) : AbstractGenie(num_wishes) {}
    bool FriendlyGenie::grantWish() {
        if (_remaining_wishes > 0) {
            _remaining_wishes--;
            _granted_wishes++;
            return true;
        } else {
            return false;
        }
    }
    std::ostream& operator<<(std::ostream &strm, const FriendlyGenie &genie) {
        return strm << "Friendly genie has granted " << genie.nGrantedWishes()
               << "wishes and still has " << genie.nRemainingWishes() << " to grant";
    }
}