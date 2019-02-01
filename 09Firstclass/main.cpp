#include <iostream>
#include <string>

using namespace std;
class Student{
    public:
    string ad;
    int viz;
    int fin;
    void durum();//fonksiyon yazmak zorundayým..
    void sozluata(int s);
    private:
        int sozlu;
};
void Student::sozluata(int s)
{
    sozlu=s;
   //' if(s<101&&s>0)
     //  sozlu=s
       // else (s=10);

}
void Student::durum()//(::)kapsar opreatörü
{
   cout<<ad+":"<<"sozlu : "<<sozlu<<endl;
    if(viz>49 && fin>49)
cout <<"basarili";
else
    cout<<"basarisiz";
}
int main()
{
    Student ahmet;
    ahmet.ad="Ahmet Var";
    ahmet.viz=57;
    ahmet.fin=60;
    ahmet.sozluata(85);
    ahmet.durum();
    return 0;
}
