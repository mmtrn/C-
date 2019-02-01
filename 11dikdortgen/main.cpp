#include <iostream>
#include "Dikdortgen.h"
#include "kare.h"
using namespace std;

int main()
{
    Dikdortgen d;
    Dikdortgen *p=new Dikdortgen;
    Kare k(5);
    k.alanYaz();
    d.alanYaz();//deðer atamadan çagırdim
    d.kenarAta(3,5);
    d.alanYaz();
    cin.get();//bir tuþa basýlasýya kadar bekle kodu
    delete p;
    return 0;
}
