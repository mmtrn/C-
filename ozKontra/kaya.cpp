#include "kaya.h"
Kaya::Kaya()
{
    setX(76);
    setY(16);
    ciz();
}

Kaya::~Kaya()
{
    sil();
}
void Kaya::ciz()
{
    cout<<termcolor::white;
    cout<<termcolor::on_grey;
    termcolor::gotoxy(getX(),getY())  ;cout<<"####";
    termcolor::gotoxy(getX(),getY()+1);cout<<"####";
    termcolor::gotoxy(getX(),getY()+2);cout<<"####";
    termcolor::gotoxy(getX(),getY()+3);cout<<"####";
}
void Kaya::sil()
{
    cout<<termcolor::white;
    cout<<termcolor::on_blue;
    termcolor::gotoxy(getX(),getY())  ;cout<<"    ";
    termcolor::gotoxy(getX(),getY()+1);cout<<"    ";
    termcolor::gotoxy(getX(),getY()+2);cout<<"    ";
    termcolor::gotoxy(getX(),getY()+3);cout<<"    ";
}
