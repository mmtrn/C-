#include "dusman.h"

 dusman::dusman(int y)
{
 sety(y);
 setx(79);
 ciz();
}

dusman::~dusman()
{
    sil();
}
void dusman::ciz()
{
    cout <<termcolor::cyan; //ateş rengi cyan
    cout<<termcolor::on_blue;
    termcolor::gotoxy(getx(),gety())   ;cout<<"<<";
    termcolor::gotoxy(getx(),gety()+1)   ;cout<<"<<";

}
void dusman::sil()
{
    cout << termcolor::red;
    cout << termcolor::on_blue;
    termcolor::gotoxy(getx(),gety())   ;cout<<"  ";
    termcolor::gotoxy(getx(),gety()+1)   ;cout<<"  ";
}
