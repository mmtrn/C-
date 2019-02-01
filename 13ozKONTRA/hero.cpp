#include "hero.h"

hero::hero()
{
    setx(3);
    sety(15);
    ciz();
    setzipla(false);
    setotur(false);
    setyuksel(false);
}

hero::~hero()
{
    sil();
}

void hero::setotur(bool otur)
{
     motur=otur;
     ciz();
}
bool hero::getotur()
{
        return motur;
}
void hero::setzipla(bool zipla)
{
            mzipla=zipla;
}
bool hero::getzipla()
{
            return mzipla;
}
void hero::setyuksel(bool yuksel)
{
        myuksel=yuksel;
}
bool hero::getyuksel()
{
            return myuksel;
}
void hero::ciz()
{
        cout << termcolor::yellow;
        cout << termcolor::on_blue;
if(getotur()==false){
if (getx()%2==0) {

termcolor::gotoxy(getx(),gety()  )  ; cout << " "<<char(1)<<" ";
termcolor::gotoxy(getx(),gety()+1)  ; cout << "\\|-";
termcolor::gotoxy(getx(),gety()+2)  ; cout << " | ";
termcolor::gotoxy(getx(),gety()+3)  ; cout << "/ \\";
}
else{


termcolor::gotoxy(getx(),gety()  )  ; cout << " "<<char(1)<<" ";
termcolor::gotoxy(getx(),gety()+1)  ; cout << "/|-";
termcolor::gotoxy(getx(),gety()+2)  ; cout << " | ";
termcolor::gotoxy(getx(),gety()+3)  ; cout << "| |";
}

}
else
{

termcolor::gotoxy(getx(),gety()  )  ; cout << "   ";
termcolor::gotoxy(getx(),gety()+1)  ; cout << "   ";
termcolor::gotoxy(getx(),gety()+2)  ; cout << "-"<<char(1)<<"-";
termcolor::gotoxy(getx(),gety()+3)  ; cout << "< >";

}
}
void hero::sil()
{
       cout << termcolor::yellow;
       cout << termcolor::on_blue;

termcolor::gotoxy(getx(),gety()  )  ; cout << "   ";
termcolor::gotoxy(getx(),gety()+1)  ; cout << "   ";
termcolor::gotoxy(getx(),gety()+2)  ; cout << "   ";
termcolor::gotoxy(getx(),gety()+3)  ; cout << "   ";

}
