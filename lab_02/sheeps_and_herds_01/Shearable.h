#ifndef SHEEP_AND_HERDS_SHEARABLE_H
#define SHEEP_AND_HERDS_SHEARABLE_H
// Composite Pattern
class Shearable {
public:
    virtual void sheer() = 0;
    virtual ~Shearable() { }
    virtual void add(Shearable *s) = 0;

};
#endif //SHEEP_AND_HERDS_SHEARABLE_H
