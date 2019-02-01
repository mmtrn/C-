#include <iostream>
#include <conio.h>
#include "termcolor.hpp"


using namespace std;
void dolgu(int x1,int y1,int x2,int y2)
{
    for(int i=y1;i<y2;i++)
        for(int j=x1;j<x2;j++)
    {
        termcolor::gotoxy(j,i);
        cout<<char(176);
    }
}
void ekran()
{
    cout<<termcolor::white<<termcolor::on_green;
    dolgu(1,1,80,4);
    cout<<termcolor::white<<termcolor::on_blue;
    dolgu(1,20,80,24);
    cout<<termcolor::white<<termcolor::on_blue;
    dolgu(1,20,80,24);
}
int main()
{
    ekran();
    getchar();
    return 0;
}
