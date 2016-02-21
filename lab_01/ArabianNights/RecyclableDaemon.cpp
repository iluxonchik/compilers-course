#include "RecyclableDaemon.h"
namespace arabiannights {
    RecyclableDaemon::RecyclableDaemon(int num_wishes):AbstractGenie(num_wishes),_active(true) { }
    bool RecyclableDaemon::grantWish() {
        if (_active) {
            _granted_wishes++;
            return true;
        } else {
            return false;
        }
    }
    void RecyclableDaemon::deactivate() { _active = false; }
}