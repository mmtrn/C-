#ifndef ANNE_H
#define ANNE_H
#include <string>
#include <iostream>
using namespace std;
class Anne
{
    public:
        Anne(string isim);
        virtual ~Anne();
        void zeka();
    protected:
    private:
        string mIsim;
};

#endif // ANNE_H
