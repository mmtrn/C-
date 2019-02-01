#include "anne.h"

Anne::Anne(string isim)
{

    cout<<isim<<" olustu\n";
    mIsim=isim;
}

Anne::~Anne()
{
    cout<<mIsim<<" gitti\n";
}
void Anne::zeka()
{
cout<<mIsim<<": IQ 150\n";
}
