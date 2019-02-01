#include "ates.h"

ates::ates()
{

}

ates::~ates()
{
    sil();
}
void ates::ciz()
{
    cout <<termcolor::grey;
    cout<<termcolor::on_blue;
    termcolor::gotoxy(getx(),gety())   ;cout<<"*";

}
void ates::sil()
{
    cout << termcolor::green;
    cout << termcolor::on_blue;
    termcolor::gotoxy(getx(),gety())   ;cout<<" ";
}
