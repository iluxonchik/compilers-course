#include "MagicLamp.h"
using namespace arabiannights;

MagicLamp::MagicLamp(int num_genies):INIT_NUM_GENIES(num_genies),
                                     _num_genies(num_genies) { }

MagicLamp::rub(int num_wishes) {
    if (_num_genies > 0) {
        if (_num_rubs%2 == 0) {
            // return a GrumpyGenie
            _num_rubs++;
            _num_genies--;
            return GrumpyGenie();
        } else {
            _num_rubs++;
            _num_genies--;
            return FriendlyGenie();
        }
    } else {
        _num_rubs++;
        return RecyclableDaemon();
    }
}

void MagicLamp::feedDaemon(Daemon& daemon) {
    _num_genies = INIT_NUM_GENIES;
    _num_rubs++;
}

int MagicLamp::nGenies() {
    return _num_genies;
}

int MagicLamp::nDaemons() {
    return _num_rubs;
}