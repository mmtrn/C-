#include "Saat.h"
#include<iostream>
using namespace std;
        void Saat::degerAta(int saat,int dak,int san)
        {
            sa=saat;
            da=dak;
            sn=san;
        }
        void Saat::yaz()
        {
            cout<<sa<<":"<<da<<"."<<sn<<endl;
        }
        void Saat::artir(int saniye)
        {
    sn+=saniye;
    if (sn>59)
        sn=sn%60;
        da++;
        }
