#ifndef VARLIK_H
#define VARLIK_H

#include<iostream>
#include"termcolor.hpp"
using namespace std;
class Varlik
{
    public://varlik s�n�f�n�nda neler olabilir..
        Varlik();
        virtual ~Varlik();
        void setX(int x);
        int getX();
        void setY(int y);
        int getY();
        virtual void ciz();
        virtual void sil();
        void hareket(int dx,int dy);
    protected:
    private:
        int mX;
        int mY;
};

#endif // VARLIK_H
