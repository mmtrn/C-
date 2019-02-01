#include <iostream>

using namespace std;

int main()
{
    int i;
    for(i=0;i<50;i++)
    {
        cout<<"i: "<<i<<endl;
        if(i%2==0)continue;
        if(i==19)break;
    }
    return 0;
}
