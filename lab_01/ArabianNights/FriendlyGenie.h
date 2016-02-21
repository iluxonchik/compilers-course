#ifndef ARABIANNIGHTS_FRIENDLYGENIE_H
#define ARABIANNIGHTS_FRIENDLYGENIE_H
#include "AbstractGenie.h"
namespace arabiannights {
class FriendlyGenie: public AbstractGenie {
    public:
    FriendlyGenie(int num_wishes);
    bool grantWish() override;
};
}

#endif //ARABIANNIGHTS_FRIENDLYGENIE_H
