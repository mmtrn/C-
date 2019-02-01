#ifndef VARLIK_H
#define VARLIK_H
#include <iostream>
#include "termcolor.hpp"


using namespace std;

class varlik
{
    public:
        varlik();
        virtual ~varlik();
        void setx(int x);
        int getx();
        void sety(int y);
        int gety();
        virtual void ciz();
        virtual void sil();
        void hareket(int dx,int dy);
    protected:
    private:
        int mx;
        int my;

};

#endif // VARLIK_H
