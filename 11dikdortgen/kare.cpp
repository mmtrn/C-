#include "kare.h"
#include <iostream>

Kare::Kare(int kenar)
{
 kenarAta(kenar,kenar);
 std::cout<<"kare olustu\n";
}

Kare::~Kare()
{
 std::cout<<"kare yok oldu";   //dtor
}
