#ifndef SHEEP_AND_HERDS_BLACKSHEEP_H
#define SHEEP_AND_HERDS_BLACKSHEEP_H
#include "AbstractSheep.h"

class BlackSheep : public AbstractSheep {
public:
    BlackSheep() : AbstractSheep("Black Sheep") { }
    void sheer() override { AbstractSheep::sheer(); }
};


#endif //SHEEP_AND_HERDS_BLACKSHEEP_H
