//Debayan Majumder
//Basics Code: Code to find the Volume of a box without using inLine method.

#include <iostream>
using namespace std;

class Box
{
    private:
        float length;
        float breadth;
        float depth;

    public:
        void setData(float l, float b, float h);
        float getVolume();
        void getData();
};

void Box:: setData(float l, float b, float h)
{
    length = l;
    breadth = b;
    depth = h;
}

float Box:: getVolume()
{
    return (length*breadth*depth);
}

void Box:: getData()
{
    cout<<"Length of Cube: "<<length<<endl;
    cout<<"Breadth of Cube: "<<breadth<<endl;
    cout<<"Depth of Cube: "<<depth<<endl;
}

int main()
{
    float b, l, h;
    Box b1, b2;

    cout<<"Enter Length 1, breadth 1 and depth 1 :"<<endl;
	cin>>l>>b>>h;
    b1.setData(l,b,h);
    cout<<"Enter Length 2, breadth 2 and depth 2 :"<<endl;
	cin>>l>>b>>h;
    b2.setData(l,b,h);

    b1.getData();
	cout<<"Volume of the Cube: "<< b1.getVolume()<<endl;

    b2.getData();
	cout<<"Volume of the Cube: ="<< b2.getVolume()<<endl;
    
    return 0;
}