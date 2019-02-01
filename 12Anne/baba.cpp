#include "baba.h"

Baba::Baba(string isim,int boy)
{
    cout<<isim<<" olustu\n";
    mIsim=isim;
    mBoy=boy;
}

Baba::~Baba()
{
   cout<<mIsim<<" gitti\n";
}
void Baba::otorite()
{
    if (mBoy<150)
        cout<<"evet \ n";
    else if (mBoy>=150 &&mBoy<170)
        cout<<"Belki\n";
    else cout<<"Hayir\n";
}
