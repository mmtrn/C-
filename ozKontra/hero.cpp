#include "hero.h"

Hero::Hero()
{
    setX(3);
    setY(15);
    ciz();
    setZipla(false);
    setOtur(false);
    setYuksel(false);
}

Hero::~Hero()
{
    sil();
}
void Hero::setOtur(bool otur)
{
    mOtur=otur;
    ciz();
}
bool Hero::getOtur()
{
    return mOtur;
}
void Hero::setZipla(bool zipla)
{
    mZipla=zipla;
}
bool Hero::getZipla()
{
    return mZipla;
}
void Hero::setYuksel(bool yuksel)
{
    mYuksel=yuksel;
}
bool Hero::getYuksel()
{
    return mYuksel;
}
void Hero::ciz()
{
    cout<<termcolor::yellow;
    cout<<termcolor::on_blue;
    if(getOtur()==false)
    {
    if (getX()%2==0)
    {
    termcolor::gotoxy(getX(),getY()+1 );cout<<" O ";
    termcolor::gotoxy(getX(),getY()+2);cout<<"/|¯";
    termcolor::gotoxy(getX(),getY()+3);cout<<"/ \\";
    }else
    {
    termcolor::gotoxy(getX(),getY()+1);cout<<" O ";
    termcolor::gotoxy(getX(),getY()+2);cout<<" | ";
    termcolor::gotoxy(getX(),getY()+3);cout<<"__ ";
    }}else
    {
    termcolor::gotoxy(getX(),getY()+1);cout<<"   ";
    termcolor::gotoxy(getX(),getY()+2);cout<<"-o-";
    termcolor::gotoxy(getX(),getY()+3);cout<<"< >";
    }
}
void Hero::sil()
{
    cout<<termcolor::yellow;
    cout<<termcolor::on_blue;
    termcolor::gotoxy(getX(),getY()  );cout<<"   ";
    termcolor::gotoxy(getX(),getY()+1);cout<<"   ";
    termcolor::gotoxy(getX(),getY()+2);cout<<"   ";
    termcolor::gotoxy(getX(),getY()+3);cout<<"   ";
}
