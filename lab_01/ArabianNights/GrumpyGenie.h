//
// Created by iluxonchik on 21-02-2016.
//

#ifndef ARABIANNIGHTS_GRUMPYGENIE_H
#define ARABIANNIGHTS_GRUMPYGENIE_H
#include "AbstractGenie.h"
namespace arabiannights {

    class GrumpyGenie : public AbstractGenie{
    public:
        GrumpyGenie(int num_wishes);
        bool grantWish() override;

    };
}

#endif //ARABIANNIGHTS_GRUMPYGENIE_H
