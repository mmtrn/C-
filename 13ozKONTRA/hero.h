#ifndef HERO_H
#define HERO_H

#include <varlik.h>


class hero : public varlik
{
    public:
        hero();
        virtual ~hero();
        void setotur(bool otur);
        bool getotur();
        void setzipla(bool zipla);
        bool getzipla();
        void setyuksel(bool yuksel);
        bool getyuksel();
        void ciz();
        void sil();

    protected:
    private:
        bool motur;
        bool mzipla;
        bool myuksel;

};

#endif // HERO_H
