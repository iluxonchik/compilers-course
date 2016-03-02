#ifndef SHEEP_AND_HERDS_PETVISITOR_H
#define SHEEP_AND_HERDS_PETVISITOR_H

#include "Visitor.h"
#include "BlackSheep.h"
#include "WhiteSheep.h"
#include "Goat.h"
#include "Herd.h"

class PetVisitor : public Visitor {
public:
    virtual void visitAnimal(Animal* a) override { std::cout << "Petting animal" << std::endl; }

    virtual void visitWhiteSheep(WhiteSheep* a) { /* do nothing */}

    virtual void visitBlackSheep(BlackSheep* a) { /* do nothing */ }

    virtual void visitGoat(Goat* a) { std::cout << "Petting Goat..." << std::endl; }

    virtual void visitHerd(Herd* a) {
        for (size_t i = 0; i < a->size(); i++) {
            a->at(i)->accept(this);
        }
    }
};
#endif //SHEEP_AND_HERDS_PETVISITOR_H
