#include <iostream>
#include <math.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i;
    srand(time(NULL));//rastgele say� almak de�i�ken say� belirlemek i�in
    ///cout<<rand()%100;//0-100 aras� say� almak
    i=rand()%6+5;
    cout<<"sayi: "<<i<<endl;
    switch(i)
    {
        case 5:cout<<"bes"<<endl;break;
        case 6:cout<<"alti"<<endl;break;
        case 7:cout<<"yedi"<<endl;break;
        case 8:cout<<"sekiz"<<endl;break;
        case 9:cout<<"dokuz"<<endl;break;
        case 10:cout<<"on"<<endl;break;
        //default cout<<"farkli bir�ey";
    }
    return 0;
}
