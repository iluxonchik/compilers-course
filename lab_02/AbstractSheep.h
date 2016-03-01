#ifndef SHEEP_AND_HERDS_ABSTRACTSHEEP_H
#define SHEEP_AND_HERDS_ABSTRACTSHEEP_H
#include "Shearable.h"
#include <string>
#include <iostream>

class AbstractSheep : public Shearable {
protected:
    bool _has_whool;
    const std::string _name;
public:
    AbstractSheep(std::string name):_has_whool(true), _name(name) { }
    virtual ~AbstractSheep() { }
    virtual void sheer() override = 0;
    void add(Shearable *s) override;
};


#endif //SHEEP_AND_HERDS_ABSTRACTSHEEP_H
