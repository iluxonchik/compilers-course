#include "AbstractSheep.h"

void AbstractSheep::sheer() {
    if (_has_whool) {
        _has_whool = false;
        std::cout << _name << " has been sheared" << std::endl;
    } else {
        std::cout << _name << ": don't tryna' sheer me twice, fool!" << std::endl;
    }
}

void AbstractSheep::add(Shearable *s) { throw "Unsupported Operation"; }
