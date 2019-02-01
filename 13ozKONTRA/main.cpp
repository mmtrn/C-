#include <iostream>
#include "termcolor.hpp"
#include "kaya.h"
#include <time.h>
#include "hero.h"
#include <conio.h> // getch fonksiyonu kullanmak için
#include "ates.h"
#include <vector>
#include "dusman.h"

using namespace std;

   void sleep(unsigned int mseconds) {
   clock_t goal = mseconds + clock();
   while (goal > clock ())
{ ///cout <<"bekle: " << goal - clock();


}
}
   void tara(int x1,int y1,int x2,int y2,int dolgu)
{
    int i,j;
    for(i=x1;i<=x2;i++)
       for(j=y1;j<=y2;j++)
    {
        termcolor::gotoxy(i,j);
        cout <<char(dolgu);
    }
}
void ekran()

{
cout<<termcolor::white;
cout<<termcolor::on_blue;
tara(1,1,80,24,32); //32 = ' '
cout<<termcolor::on_green;
tara(1,19,80,24,176);
}


int main() {

    ekran();

    unsigned long int frame=0;
    unsigned long int nesneyokframe;
    int yeninesneframe;
    bool devam = true;
    kaya *nesne;
    nesne = new kaya();
    hero *malkoc = new hero;
    unsigned char tus;
    vector<ates*> atesler; ///geliþmiþ dizi
    vector<ates*>::iterator mermi;
vector<dusman*> ordu; ///gelişmiş dizi
vector<dusman*>::iterator tek;
int yenidusmanframe=rand()%10+5;


   do {
///kaya üret

  if(nesne!=NULL){
     nesne->hareket(-1,0);

} else
{

  if(frame==yeninesneframe+nesneyokframe)
     nesne = new kaya;
}
///düşman üret
if(yenidusmanframe==frame)
{
    dusman *d = new dusman(rand()%8+2);
    ordu.push_back(d);
    yenidusmanframe += rand()%20+3;
}


///basýlan tusu öðren ve deðerlendir.
  if (kbhit()) //tuþa basýldýðýný öðren.
{
       tus=getch();
       if(tus=='d' || tus=='D') {
            if(malkoc->getx()<40)
                malkoc->hareket(1,0);

       }
       else if(tus=='a' || tus =='A'){
        if(malkoc->getx()>0)
            malkoc->hareket(-1,0);
       }
       else if(tus=='s' || tus =='S')
       {
           malkoc->setotur(!malkoc->getotur());
       }
else if (tus=='w' || tus =='W')
 {
    if(malkoc->getzipla()==false && malkoc->getyuksel()==false)
                {
             malkoc->setzipla(true);
             malkoc->setyuksel(true);
    }

 }
else if(tus==' ')
       {
           ates *a = new ates;
           a->setx(malkoc->getx()+3);
           a->sety(malkoc->gety()+1);
           atesler.push_back(a);
}


}
       sleep(50);

  if (nesne!=NULL && nesne->getx()<2)
{
    delete nesne;
    nesne=NULL;
    nesneyokframe=frame;
    yeninesneframe=rand()%30+10;
    termcolor::gotoxy(60,1);
    cout << "SCORE: " << nesneyokframe+yeninesneframe;
}

///adam kaya hıt test

if(nesne!=NULL &&
    malkoc->getx()+3>=nesne->getx() &&
    malkoc->gety()+4>=nesne->gety() &&
    malkoc->getx()<=nesne->getx()+4)
{
    devam = false;
}

/// dusmanı hareket ettir

for(tek = ordu.begin(); tek!=ordu.end();tek++)
{
    (*tek)->hareket(-1,0);
}

///ATEŞ ET
for(mermi = atesler.begin(); mermi!=atesler.end();mermi++)
{
    (*mermi)->hareket(1,0);
}
///ateş bişeye çarpınca
mermi=atesler.begin();
while (mermi!=atesler.end())
{
    if((*mermi)->getx()==80)
        {
        delete (*mermi);
        atesler.erase(mermi);
    }
    else if(nesne!=NULL && (*mermi)->getx()>=nesne->getx()&& (*mermi)->gety()>=nesne->gety() )
    {
        delete (*mermi);
        atesler.erase(mermi);
    }
else mermi ++;
}
///düşman en sona geldi mi

tek = ordu.begin();
while(tek!=ordu.end())
{
    if ((*tek)->getx()<2)
    {
        delete (*tek);
        ordu.erase(tek);
    }
    else tek ++;
}
/// mermi düşmana çarptı mı
mermi = atesler.begin();
while(mermi!=atesler.end())
{
   bool silin = false ;
   tek = ordu.begin();
   while (tek !=ordu.end())
   {
       if((*mermi)->getx()>=(*tek)->getx()&&
          (*mermi)->gety()>=(*tek)->gety()&&
           (*mermi)->gety()<=(*tek)->gety()+1)
       {
           delete (*mermi);
           atesler.erase(mermi);
           delete (*tek);
           ordu.erase(tek);
           silin=true;
           break;
       }

   else tek++;
   }
   if(!silin)
   mermi++;
}
///DUSMAN MAKOC TEST
tek = ordu.begin();
while(tek!=ordu.end())
{
    if(malkoc->getx()+3>=(*tek)->getx() && ///sol
       malkoc->getx()<=(*tek)->getx()+2 && ///sağ
       malkoc->gety()+4>=(*tek)->gety() && ///alt
       malkoc->gety()<=(*tek)->gety()+2  ///kafa
       )
    {
        devam = false;
    } else
    tek ++;
}


///ZIPLA
if(malkoc->getzipla())
{
    if(malkoc->getyuksel())
        {
    malkoc->hareket(0,-1);
    if(malkoc->gety()<4)
    malkoc->setyuksel(false);
}else
{
malkoc->hareket(0,1);

    if(malkoc->gety()==15)
        malkoc->setzipla(false);

}
}
    frame++;
    termcolor::gotoxy(70,1);
    cout << "TIME: " << frame;
}
    while (devam==true);
    cout << termcolor::white<<termcolor::on_cyan;
    termcolor::gotoxy(30,10);
    cout << "  !!GAME OVER!!  " ;
    getch();

    return 0;
}
