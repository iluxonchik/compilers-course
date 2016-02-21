/*
 * NOTE: a good choice of a design pattern for this case would be the State
 * Pattern, but it's not going to be implemented, since it's not the point
 * of this exercise.
 */
#ifndef ARABIANNIGHTS_MAGICLAMP_H
#define ARABIANNIGHTS_MAGICLAMP_H

namespace arabiannights {
    class MagicLamp {
    private:
        int _num_rubs;
        int _num_genies;
        bool _active;
    public:
        AbstractGenie rub();
        void feedDaemon(Daemon daemon);
        int nGenies(); // num genies left
        int nDaemons(); // num recharges
        MagicLamp(int num_genies);
    };
}

#endif //ARABIANNIGHTS_MAGICLAMP_H
