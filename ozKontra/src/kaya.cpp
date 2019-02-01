#include "kaya.h"

kaya::kaya()
{
  setx(76);
  sety(16);
  ciz();
}

kaya::~kaya()
{
    sil();

}

void kaya::ciz()
{
    cout <<termcolor::white;
    cout<<termcolor::on_grey;
    termcolor::gotoxy(getx(),gety())   ;cout<<"####";
    termcolor::gotoxy(getx(),gety()+1) ;cout<<"####";
    termcolor::gotoxy(getx(),gety()+2) ;cout<<"####";
}
void kaya::sil()
{
    cout <<termcolor::white;
    cout<<termcolor::on_blue;
    termcolor::gotoxy(getx(),gety())   ;cout<<"    ";
    termcolor::gotoxy(getx(),gety()+1) ;cout<<"    ";
    termcolor::gotoxy(getx(),gety()+2) ;cout<<"    ";
}
