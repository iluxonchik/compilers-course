#ifndef SHEEP_AND_HERDS_GOAT_H
#define SHEEP_AND_HERDS_GOAT_H

#include "Animal.h"
#include "Visitor.h"

class Goat : public Animal {
public:
    virtual void accept(Visitor* v) override { v->visitGoat(this); }
    virtual void add(Animal* a) override { throw "Unsupported Operation"; }
};
#endif //SHEEP_AND_HERDS_GOAT_H
