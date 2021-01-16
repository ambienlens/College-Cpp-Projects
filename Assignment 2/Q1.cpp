//Debayan Majumder
#include <iostream>
using namespace std;
int const MAX = 50;

class Vector
{
    float A[MAX];
    int n;

    public:
        void create()
        {
            cout << "Enter the no. of Values you want to Enter: (Max -> "<<MAX<<")\n";
            cin >> n;
            cout << "Enter "<<n<<" values\n";
            for(int i=0; i<n; i++)
                cin >>A[i];
        }

        void modify(int newVal, int oldPos)
        {
            A[oldPos - 1] = newVal;
        }

        void multiply(int mulVal)
        {
            for(int i=0; i<n; i++)
                A[i] = A[i] * mulVal;
        }

        void display()
        {
            cout << "Display of Array: \n";
            cout << "(";
            for (int i=0; i<n; i++)
            {
                cout << A[i];
                if (i != n - 1)
                    cout << ",";
            }
            cout << ")\n";
        }
};
int main()
{
    Vector ob;
    int mul;
    int newVal, oldPos;
    int choice;
    do
    {
        cout << "\nChoice List\n";
        cout << "1)    To Create Vector Array\n";
        cout << "2)    To Modify Array\n";
        cout << "3)    To Multiply with Scalar value\n";
        cout << "4)    To Display\n";
        cout << "5)    EXIT\n";
        cout << "Enter your choice:-";
        cin >> choice;
        switch (choice)
        {
        case 1:
            ob.create();
            break;
        case 2:
            cout << "Enter Location of array at which value is to be modified: \n";
            cin >> oldPos;
            cout << "Enter new value: \n";
            cin >> newVal;
            ob.modify(newVal, oldPos);
            break;
        case 3:
            cout << "Enter the value with which the array will be Modified: \n";
            cin >> mul;
            ob.multiply(mul);
            break;
        case 4:
            ob.display();
            break;
        case 5:
            break;
        }
    }while (choice != 5);
}