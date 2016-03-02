#include "AbstractSheep.h"
#include "WhiteSheep.h"
#include "BlackSheep.h"
#include "Herd.h"

int main() {
    Shearable* w1 = new WhiteSheep();
    Shearable* w2 = new WhiteSheep();
    Shearable* b1 = new BlackSheep();
    Shearable* b2 = new BlackSheep();
    Shearable* h = new Herd();
    h->add(w1);
    h->add(b2);
    b1->sheer();
    w2->sheer();
    h->sheer();
    h->sheer();

    delete w1;
    delete w2;
    delete b1;
    delete b2;
    delete h;

}