//Debayan Majumder
//To add two distances (km, m, cm)

#include <iostream>
using namespace std;

class DistAdd
{
    private:
        float km, ms, cm;
    public:
        DistAdd(){}
        DistAdd(float k, float m, float c): km(k), ms(m), cm(c) {}
        DistAdd Addition(DistAdd dist)
        {
            DistAdd out;
            out.km = km + dist.km;
            out.ms = ms + dist.ms;
            out.cm = cm + dist.cm;
            return out;
        }
        void display()
        {
            cout<<"The distance: Km: "<<km<<", Ms: "<<ms<<", Cm: "<<cm<<endl;
        }
};

int main()
{
    float kms, mts, cms;

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