#ifndef DIKDORTGEN_H
#define DIKDORTGEN_H

#include <iostream>

class Dikdortgen
{
    public:
         Dikdortgen();
        ~Dikdortgen();//destructor
        void kenarAta(int x ,int y);
        void alanYaz();
    protected:
    private:
        int kenar1;
        int kenar2;
};

#endif // DIKDORTGEN_H
