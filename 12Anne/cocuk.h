#ifndef COCUK_H
#define COCUK_H
#include "anne.h"
#include "baba.h"


class Cocuk : public Anne,public Baba
{
    public:
        Cocuk(int yaramaz, string aisim,string bisim);
        virtual ~Cocuk();
        void ozellik();
    protected:
    private:
};

#endif // COCUK_H
