#include "varlik.h"
#include "termcolor2.hpp"
varlik::varlik()
{
    setx(5);
    sety(10);
}

varlik::~varlik()
{
    sil();
}
void varlik:: setx(int x)
{
    mx=x>0 && x<81?x:mx;
}
int varlik:: getx()
{
    return mx;
}
void varlik::sety(int y)
{
    my = y>0 && y<25?y:my;
}
int varlik::gety()
{
    return my;
}
void varlik::ciz()
{
///beni miras alan çizsin
}
void varlik::sil()
{
///beni miras alan silsin
}
void varlik::hareket(int dx,int dy)
{
sil();
setx(getx()+dx); /// mx = mx + dx
sety(gety()+dy);
ciz();
}
