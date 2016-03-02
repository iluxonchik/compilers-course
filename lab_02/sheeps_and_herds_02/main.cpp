#include "AbstractSheep.h"
#include "WhiteSheep.h"
#include "BlackSheep.h"
#include "Herd.h"
#include "Goat.h"
#include "SheerVisitor.h"
#include "PetVisitor.h"

int main() {
    Animal* w1 = new WhiteSheep();
    Animal* w2 = new WhiteSheep();
    Animal* b1 = new BlackSheep();
    Animal* b2 = new BlackSheep();
    Animal* g = new Goat();
    Animal* h = new Herd();

    SheerVisitor* sv = new SheerVisitor();
    PetVisitor* pv = new PetVisitor();

    h->add(w1);
    h->add(b2);
    h->add(g);

    w2->accept(sv);
    h->accept(pv);
    w1->accept(sv);
    w1->accept(sv);

    delete w1;
    delete w2;
    delete b1;
    delete b2;
    delete h;
    delete sv;
    delete pv;

}