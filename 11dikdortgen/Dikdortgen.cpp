#include "Dikdortgen.h"
#include <iostream>
Dikdortgen::Dikdortgen()
{
    std::cout<<"dikdortgen\n";
    kenar1=1;
    kenar2=1;
}

Dikdortgen::~Dikdortgen()
{
    std::cout<<"ben gittim\n";
}
void Dikdortgen::kenarAta(int x ,int y)
{
kenar1=x;
kenar2=y;
}
void Dikdortgen::alanYaz()
{
         std::cout<<"Alan:"<<kenar1*kenar2<<"\n";
}
