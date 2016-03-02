#ifndef SHEEP_AND_HERDS_WHITESHEEP_H
#define SHEEP_AND_HERDS_WHITESHEEP_H

#include "AbstractSheep.h"
#include "Visitor.h"

class WhiteSheep : public AbstractSheep {
public:
    WhiteSheep() : AbstractSheep("White Sheep") { }
    virtual void accept(Visitor* v) override { v->visitWhiteSheep(this); }
    virtual void add(Animal *s) override { throw "Unsupported Operation"; }
};


#endif //SHEEP_AND_HERDS_WHITESHEEP_H
