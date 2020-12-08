//Debayan Majumder
//To add two distances (km, m, cm)

#include <iostream>
using namespace std;

class DistAdd
{
    private:
        int km, ms, cm;
    public:
        DistAdd(){}
        DistAdd(int k, int m, int c): km(k), ms(m), cm(c) {}
        DistAdd Addition(DistAdd dist)
        {
            DistAdd out;
            out.cm = (cm + dist.km) % 100;
            out.ms = ((ms + dist.ms) + (cm + dist.km) / 100) % 1000;
            out.km = (km + out.km) + ((ms + dist.ms) + (cm + dist.km) / 100) / 1000;
        }
        void display()
        {
            cout<<"The distance: Km: "<<km<<", Ms: "<<ms<<", Cm: "<<cm<<endl;
        }
};

int main()
{
    int kms, mts, cms;

    cout<<"Enter the km, ms & cm for Parameter 1: \n";
    cin>>kms>>mts>>cms;
    DistAdd D1(kms, mts, cms);
    D1.display();

    cout<<"Enter the km, ms & cm for Parameter 2: \n";
    cin>>kms>>mts>>cms;
    DistAdd D2(kms, mts, cms);
    D2.display();

    DistAdd finale = D1.Addition(D2);
    finale.display();
}