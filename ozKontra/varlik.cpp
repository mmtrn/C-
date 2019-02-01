#include "varlik.h"

Varlik::Varlik()
{
    setX(5);
    setY(10);
}

Varlik::~Varlik()
{
    sil();
}
void Varlik::setX(int x)
{
    mX=x>0&&x<81?x:mX;///if(x>0&&x<81) mX=x;
}
int Varlik::getX()
{
    return mX;
}
void Varlik::setY(int y)
{
mY=y>0&&y<25?y:mY;
}
int Varlik::getY()
{
    return mY;
}
void Varlik::ciz()
{
//beni miras alan cizsin
}
void Varlik::sil()
{
//beni miras alan silsin
}
void Varlik::hareket(int dx,int dy)
{
sil();
setX(getX()+dx);//mx=mX+dX;
setY(getY()+dy);
ciz();
}
