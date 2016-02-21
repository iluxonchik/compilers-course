#include "MagicLamp.h"
#include "GrumpyGenie.h"
#include "AbstractGenie.h"
#include "RecyclableDaemon.h"
#include "FriendlyGenie.h"
namespace arabiannights {

    MagicLamp::MagicLamp(int num_genies) : INIT_NUM_GENIES(num_genies),
                                           _num_genies(num_genies) { }

    AbstractGenie MagicLamp::rub(int num_wishes) {
        if (_num_genies > 0) {
            if (_num_rubs % 2 == 0) {
                // return a GrumpyGenie
                _num_rubs++;
                _num_genies--;
                return GrumpyGenie(num_wishes);
            } else {
                _num_rubs++;
                _num_genies--;
                return FriendlyGenie(num_wishes);
            }
        } else {
            _num_rubs++;
            return RecyclableDaemon(num_wishes);
        }
    }

    void MagicLamp::feedDaemon(RecyclableDaemon &daemon) {
        _num_genies = INIT_NUM_GENIES;
        _num_rubs++;
        daemon.deactivate();
    }

    int MagicLamp::nGenies() const{
        return _num_genies;
    }

    int MagicLamp::nDaemons() const{
        return _num_rubs;
    }

    bool MagicLamp::operator==(const MagicLamp &other) {
        return this->_num_genies == other.nGenies() &&
                this->_num_rubs == other.nDaemons();
    }
}