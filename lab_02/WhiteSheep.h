#ifndef SHEEP_AND_HERDS_WHITESHEEP_H
#define SHEEP_AND_HERDS_WHITESHEEP_H

#include "AbstractSheep.h"

class WhiteSheep : public AbstractSheep {
public:
    WhiteSheep() : AbstractSheep("White Sheep") { }
    void sheer() override { AbstractSheep::sheer(); }
};


#endif //SHEEP_AND_HERDS_WHITESHEEP_H
