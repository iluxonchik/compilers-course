#ifndef SHEEP_AND_HERDS_HERD_H
#define SHEEP_AND_HERDS_HERD_H

#include <vector>
#include "AbstractSheep.h"
#include "Animal.h"
#include "Visitor.h"

class Herd : public Animal {
private:
    std::vector<Animal *> _animal;
public:
    virtual void add(Animal *a) override { _animal.push_back(a); }
    Animal* at(size_t index) { return _animal.at(index); }
    virtual void accept(Visitor* v) override { v->visitHerd(this); }
    virtual size_t size() const { return _animal.size(); }
};
#endif //SHEEP_AND_HERDS_HERD_H
