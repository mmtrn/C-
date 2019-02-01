#include <iostream>

using namespace std;

int main()
{
    int i(0);//unsigned char i=0;
    while(i<255)
    {
        cout<<char(i++);
    }
    return 0;
}
