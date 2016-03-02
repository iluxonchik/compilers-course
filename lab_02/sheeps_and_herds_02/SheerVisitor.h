#ifndef SHEEP_AND_HERDS_SHEERVISISTOR_H
#define SHEEP_AND_HERDS_SHEERVISISTOR_H

#include "Visitor.h"
#include "BlackSheep.h"
#include "WhiteSheep.h"
#include "Goat.h"
#include "Herd.h"

class SheerVisitor : public Visitor {
    virtual void visitAnimal(Animal* a) override { /* do nothing */ }

    virtual void visitWhiteSheep(WhiteSheep* a) {
        if (a->getHasWhool()) {
            a->setHasWhool(false);
            std::cout << a->getName() << ": shearing..." << std::endl;
        } else {
            std::cout << a->getName() << ": you can't shear me twice!" << std::endl;
        }
    }

    virtual void visitBlackSheep(BlackSheep* a) {
        if (a->getHasWhool()) {
            a->setHasWhool(false);
            std::cout << a->getName() << ": shearing..." << std::endl;
        } else {
            std::cout << a->getName() << ": you can't shear me twice!" << std::endl;
        }
    }
    virtual void visitGoat(Goat* a) { /* do nothing */ }
    virtual void visitHerd(Herd* a) {
        for (size_t i = 0; i < a->size(); i++) {
            a->at(i)->accept(this);
        }
    }
};
#endif //SHEEP_AND_HERDS_SHEERVISISTOR_H
