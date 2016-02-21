#include "AbstractGenie.h"

namespace arabiannights {

    AbstractGenie::AbstractGenie(int num_wishes):_remaining_wishes(num_wishes){}
    int AbstractGenie::nGrantedWishes() const {return _granted_wishes; }
    int AbstractGenie::nRemainingWishes() const {return _remaining_wishes; }
    bool AbstractGenie::grantWish() { }
}
