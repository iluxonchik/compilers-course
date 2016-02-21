#ifndef ARABIANNIGHTS_RECYCLABLEDAEMON_H
#define ARABIANNIGHTS_RECYCLABLEDAEMON_H
#include "AbstractGenie.h"
namespace arabiannights {
    class RecyclableDaemon : public AbstractGenie{
    private:
        bool _active;
    public:
        RecyclableDaemon(int num_wishes);
        bool grantWish() override;
        void deactivate();
    };
}


#endif //ARABIANNIGHTS_RECYCLABLEDAEMON_H
