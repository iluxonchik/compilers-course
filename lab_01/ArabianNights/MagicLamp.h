/*
 * NOTE: a good choice of a design pattern for this case would be the State
 * Pattern, but it's not going to be implemented, since it's not the point
 * of this exercise.
 */
#ifndef ARABIANNIGHTS_MAGICLAMP_H
#define ARABIANNIGHTS_MAGICLAMP_H

#include "AbstractGenie.h"
#include "RecyclableDaemon.h"

namespace arabiannights {
    class MagicLamp {
    private:
        const int INIT_NUM_GENIES;
        int _num_rubs;
        int _num_genies;
    public:
        AbstractGenie rub(int num_wishes);
        void feedDaemon(RecyclableDaemon& daemon);
        int nGenies() const; // num genies left
        int nDaemons() const; // num recharges
        MagicLamp(int num_genies);

        bool operator==(const MagicLamp &other);
    };
}

#endif //ARABIANNIGHTS_MAGICLAMP_H
