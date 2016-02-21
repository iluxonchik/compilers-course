#ifndef ARABIANNIGHTS_ABSTRACTGENIE_H
#define ARABIANNIGHTS_ABSTRACTGENIE_H
namespace arabiannights {
    class AbstractGenie {
    protected:
        int _remaining_wishes;
        int _granted_wishes;
    public:
        AbstractGenie(int num_wishes);
        int nGrantedWishes() const;
        int nRemainingWishes() const;
        virtual bool grantWish();
    };
}
#endif //ARABIANNIGHTS_ABSTRACTGENIE_H
