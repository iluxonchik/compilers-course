#ifndef SHEEP_AND_HERDS_VISITOR_H
#define SHEEP_AND_HERDS_VISITOR_H
// Forward declaration to avoid circular dependency problems
class Animal;
class WhiteSheep;
class BlackSheep;
class Goat;
class Herd;

class Visitor {
public:
    virtual void visitAnimal(Animal* a) = 0;
    virtual void visitWhiteSheep(WhiteSheep* a) = 0;
    virtual void visitBlackSheep(BlackSheep* a) = 0;
    virtual void visitGoat(Goat* a) = 0;
    virtual void visitHerd(Herd* a) = 0;
};
#endif //SHEEP_AND_HERDS_VISITOR_H
