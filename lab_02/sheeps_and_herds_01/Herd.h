#ifndef SHEEP_AND_HERDS_HERD_H
#define SHEEP_AND_HERDS_HERD_H

#include <vector>
#include "AbstractSheep.h"
#include "Shearable.h"
class Herd : public Shearable {
private:
    std::vector<Shearable*> _sheep;
public:
    void add(Shearable *s) { _sheep.push_back(s); }
    void sheer() override { for(auto& s : _sheep) s->sheer(); }

};
#endif //SHEEP_AND_HERDS_HERD_H
