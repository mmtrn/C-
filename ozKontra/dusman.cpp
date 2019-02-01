#include "dusman.h"
#include "varlik.h"
Dusman::Dusman(int y)
{
    setY(y);
    setX(70);
    ciz();
}

Dusman::~Dusman()
{
    sil();
}
void Dusman::ciz()
{
    cout<<termcolor::green;
    cout<<termcolor::on_blue;
    termcolor::gotoxy(getX(),getY())  ;cout<<">>";
    termcolor::gotoxy(getX(),getY())  ;cout<<"<<";
}
void Dusman::sil()
{
    cout<<termcolor::red;
    cout<<termcolor::on_blue;
    termcolor::gotoxy(getX(),getY())  ;cout<<"  ";
    termcolor::gotoxy(getX(),getY())  ;cout<<"  ";

}
