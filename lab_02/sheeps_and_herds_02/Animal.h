/*
 * "Visitable"
 */
#ifndef SHEEP_AND_HERDS_SHEARABLE_H
#define SHEEP_AND_HERDS_SHEARABLE_H

#include "Visitor.h"

class Animal {
public:
    virtual void accept(Visitor* v) { v->visitAnimal(this); }
    virtual ~Animal() { }
    virtual void add(Animal *s) = 0;

};
#endif //SHEEP_AND_HERDS_SHEARABLE_H
