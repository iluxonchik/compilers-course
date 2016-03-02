#ifndef SHEEP_AND_HERDS_ABSTRACTSHEEP_H
#define SHEEP_AND_HERDS_ABSTRACTSHEEP_H
#include "Animal.h"
#include <string>
#include <iostream>

class AbstractSheep : public Animal {
protected:
    bool _has_whool;
    const std::string _name;
public:
    AbstractSheep(std::string name):_has_whool(true), _name(name) { }
    virtual ~AbstractSheep() { }
    bool getHasWhool() const { return _has_whool; }
    void setHasWhool(bool value) { _has_whool = value; }
    std::string getName() const { return _name; }

};


#endif //SHEEP_AND_HERDS_ABSTRACTSHEEP_H
