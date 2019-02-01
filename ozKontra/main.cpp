#include <iostream>
#include"termcolor.hpp"
#include"kaya.h"
#include"hero.h"
#include<conio.h>//getch fonksiyonu için
#include"ates.h"
#include <vector>
#include "dusman.h"
using namespace std;
void tara(int x1,int y1, int x2, int y2 , int dolgu)
{
    for(int i=x1;i<=x2;i++)//terminal ekraný 80*25 ý yuzden bu sayý onemlidir.
        for (int j=y1;j<=y2;j++)
    {
        termcolor::gotoxy(i,j);
        cout<<char(dolgu);
    }

}
void ekran()
{
    cout<<termcolor::white;
    cout<<termcolor::on_blue;
    cout<<"Ahmet";
    tara(1,1,80,24,32);//32 =' '
    cout<<termcolor::on_green;
    tara(1,19,80,24,176);
}

int main()
{

    ekran();
    unsigned long int frame=0;
    unsigned int kayaYokFrame;
    unsigned int yeniKayaFrame;
    bool devam=true;
    Kaya *kaya;
    kaya=new Kaya();
    Hero *malkoc=new Hero;
    unsigned char Tus;                       //ok tuşlarının sayısı yüksek olduğu için
    vector <Ates*> atesler;//gelişmiş dizi
    vector<Ates*>::iterator mermi;//gelişmiş diznin bir elemanını gösteren pointer
    vector<Dusman*>ordu;
    vector<Dusman*>::iterator tek;
    int yeniDusmanFrame =rand()%10+5;
    do{
            if(kaya!=NULL)
            {
                kaya->hareket(-1,0);
            }
            else
                {
                if(frame==yeniKayaFrame+kayaYokFrame)
                {
                    kaya=new Kaya;
                }

        }
        //düşman üret
        if(yeniDusmanFrame=frame)
        {
            Dusman*d=new Dusman(rand()%8+2);
            ordu.push_back(d);
            yeniDusmanFrame+=rand()%20+3;
        }
        ///basılan tuşu öğren ve değerlendir
       if (kbhit()!=0){
        Tus=getch();

    if (Tus=='d'||Tus=='D')
    {
        if(malkoc->getX()<40)
            malkoc->hareket(1,0);
    }
    else if (Tus=='a'||Tus=='A')
    {
        if(malkoc->getX()>0)
            malkoc->hareket(-1,0);
    }
     else if (Tus=='s'||Tus=='S')
     {
         malkoc->setOtur(!malkoc->getOtur());
     }
     else if (Tus=='w'||Tus=='W')
     {
         if (malkoc->getZipla()==false&&malkoc->getYuksel()==false)
    {
        malkoc->setZipla(true);
        malkoc->setYuksel(true);
    }

    }
    else if (Tus==' ')
    {
        Ates *a=new Ates;
        a->setX(malkoc->getX()+3);
        a->setY(malkoc->getY()+1);
        atesler.push_back(a);
    }
       }
    Sleep(100);
    if (kaya!=NULL&&kaya->getX()<2)
    {
        delete kaya;
        kaya=NULL;
        kayaYokFrame=frame;
        yeniKayaFrame=rand()%30+10;
        termcolor::gotoxy(60,1);cout<<"kaya:"<<kayaYokFrame+yeniKayaFrame;
    }
    //adam kaya hit test
    if (kaya!=NULL&&malkoc->getX()+3>=kaya->getX()&&
        malkoc->getY()+4>=kaya->getY()&&
        malkoc->getX()<=kaya->getX()+4
        )
        {
            {
        cout<<termcolor::on_blue;
        termcolor::gotoxy(1,3);cout<<"carpti";
    }
            devam=false;
        }

    else
    {
        cout<<termcolor::on_blue;
        termcolor::gotoxy(1,3);cout<<"      ";
//düsmani hareket ettir
        for(tek=ordu.begin();tek!=ordu.end();tek++)
        {
            (*tek)->hareket(-1,0);
        }
    }
//ates et
    for (mermi=atesler.begin();mermi!=atesler.end();mermi++)
    {
        (*mermi)->hareket(1,0);
    }
    //ates carpti mi?
    mermi=atesler.begin();
    while (mermi!=atesler.end())
    {
        if((*mermi)->getX()==80)
        {
            delete (*mermi);
            atesler.erase(mermi);
        }
        else if(kaya!=NULL&&(*mermi)->getX()==kaya->getX())
        {
            delete (*mermi);
            atesler.erase(mermi);
        }
        else mermi++;
    }
    //düsman sola geldi mi?
    tek=ordu.begin();
    while(tek!=ordu.end())
    {
        if((*tek->getX()<2))
        {
            delete(*tek);
            ordu.erase(tek);
        }else tek++;
    }
    //Mermi Dusmana carptimi?
    mermi=atesler.begin();
    while(mermi!=atesler.end())
{
    bool silin=false;
    tek=ordu.begin();
    while (tek!=ordu.end())
    {
        if((*mermi)->getX()>=(*tek)->getX()&&
           (*mermi)->getY()>=(*tek)->getY()&&
           (*mermi)->getY()>=(*tek)->getY()+1)
           {
               delete(*mermi);
               atesler.erase(mermi);
               delete(*tek);
               ordu.erase(tek);
               silin=true;

           }
           else tek++;
           if(!silin)
           mermi++

    //kaya collision test


//zipla
    if(malkoc->getZipla())
    {
        if(malkoc->getYuksel())
            {
        malkoc->hareket(0,-1);
        if(malkoc->getY()<4)
            malkoc->setYuksel(false);
        }else
        {
            malkoc->hareket(0,1);
            if(malkoc->getY()==15)
                malkoc->setZipla(false);
        }



    }

    frame++;
    termcolor::gotoxy(70,1);cout<<"frm: "<<frame;
    }while(devam==true);
    cout<<termcolor::white<<termcolor::on_red;
    termcolor::gotoxy(30,10);
    cout<<"    GAME OVER    ";
    getch();
    return 0;
}
