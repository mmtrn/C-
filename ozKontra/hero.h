#ifndef HERO_H
#define HERO_H

#include "varlik.h"


class Hero : public Varlik
{
    public:
        Hero();
        virtual ~Hero();
        void setOtur(bool otur);
        bool getOtur();
        void setZipla(bool zipla);
        bool getZipla();
        void setYuksel(bool yuksel);
        bool getYuksel();
        void ciz();
        void sil();
    protected:
    private:
        bool mOtur;
        bool mZipla;
        bool mYuksel;

};

#endif // HERO_H
