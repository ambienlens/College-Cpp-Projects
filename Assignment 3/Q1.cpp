//Debayan Majumder
#include <iostream>
using namespace std;

class FLOAT
{
    private:
        float value;
    
    public:
        FLOAT() {}

        void Input(float inN)
        {
            value = inN;
        }

        void Output()
        {
            cout << "Answer -> "<<value<<endl;
        }

        FLOAT operator+(FLOAT a)
        {
            FLOAT temp;
            temp.value = value + a.value;
            return temp;
        }

        FLOAT operator-(FLOAT a)
        {
            FLOAT temp;
            temp.value = value - a.value;
            return temp;
        }

        FLOAT operator/(FLOAT a)
        {
            FLOAT temp;
            temp.value = value / a.value;
            return temp;
        }

        FLOAT operator*(FLOAT a)
        {
            FLOAT temp;
            temp.value = value * a.value;
            return temp;
        }

        FLOAT operator++()
        {
            FLOAT temp;
            temp.value = ++value;
            return temp;
        }
};

int main()
{
    FLOAT A,B,C;
    float data;

    cout << "Enter the first Number : \n";
    cin >> data;
    A.Input(data);
    cout << "Enter the second Number : \n";
    cin >> data;
    B.Input(data);

    cout << "Result after addition: \n";
    C = A + B;
    C.Output();
    cout << "Result after subtraction: \n";
    C = A - B;
    C.Output();
    cout << "Result after multiplication: \n";
    C = A * B;
    C.Output();
    cout << "Result after division: \n";
    C = A / B;
    C.Output();
    cout << "Result after Unary operation on 1st value: \n";
    ++A;
    A.Output();
    cout << "Result after Unary operation on 2st value: \n";
    ++B;
    B.Output();
    return 0;
}