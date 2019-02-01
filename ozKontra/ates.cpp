#include "ates.h"

Ates::Ates()
{

}

Ates::~Ates()
{
    sil();
}
void Ates::ciz()
{
    cout<<termcolor::green;
    //cout<<termcolor::on_white;
    termcolor::gotoxy(getX(),getY()+1)  ;cout<<":)";

}
void Ates::sil()
{
    cout<<termcolor::green;
    cout<<termcolor::on_blue;
    termcolor::gotoxy(getX(),getY()+1)  ;cout<<" ";


}

