#include <iostream>
#include "anne.h"
#include"baba.h"
#include"cocuk.h"
using namespace std;

int main()
{
    Anne *a;
    a=new Anne("Nihal");
    //a->zeka();protected olduðu için çalýþmaz
    Baba *b;
    b=new Baba("Emin",175);
    Cocuk *ali=new Cocuk(80,"Ece","Can");
    ali->zeka();
    cin.get();
    delete a;

    delete b;
    delete ali;

    return 0;
}
