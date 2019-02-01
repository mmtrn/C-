#include <iostream>
#include <math.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i;
    srand(time(NULL));//rastgele sayý almak deðiþken sayý belirlemek için
    ///cout<<rand()%100;//0-100 arasý sayý almak
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
        //default cout<<"farkli birþey";
    }
    return 0;
}
