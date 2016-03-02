#ifndef SHEEP_AND_HERDS_BLACKSHEEP_H
#define SHEEP_AND_HERDS_BLACKSHEEP_H
#include "AbstractSheep.h"
#include "Visitor.h"

class BlackSheep : public AbstractSheep {
public:
    BlackSheep() : AbstractSheep("Black Sheep") { }
    virtual void accept(Visitor* v) override { v->visitBlackSheep(this); }
    virtual void add(Animal *s) override { throw "Unsupported Operation"; }
};


#endif //SHEEP_AND_HERDS_BLACKSHEEP_H
