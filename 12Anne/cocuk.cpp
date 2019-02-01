#include "cocuk.h"

Cocuk::Cocuk(int yaramaz, string aisim,string bisim):Anne(aisim),Baba(bisim,185)
{
    cout<<"cocuk olustu : "<<yaramaz<<"\n";
}

Cocuk::~Cocuk()
{
    cout<<"cocuk gitti : \n";
}
void Cocuk::ozellik()
{
    zeka();
    otorite();
}
