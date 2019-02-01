#ifndef BABA_H
#define BABA_H
#include <iostream>
#include<string>
using namespace std;

class Baba
{
    public:
        Baba(string isim,int boy);
        virtual ~Baba();
    protected:
        void otorite();

    private:
        string mIsim;
        int mBoy;
};

#endif // BABA_H
