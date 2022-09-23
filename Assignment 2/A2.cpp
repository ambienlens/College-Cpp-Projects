//Debayan Majumder
#include <iostream>
using namespace std;

class DB;
class DM
{
    private:
        float kms, mts, cms;

    public:
        void getData()
        {
            cout << "Enter distance in kilometer-meter-centimeter: \n";
            cin>>kms>>mts>>cms;
        }

        void display()
        {
            cout<<"The Distance is: \n";
            cout<<kms<<"km and "<<mts<<" meters and "<<cms<<"cm.\n";
        }

        friend void add(DM &, DB &);
};

class DB
{
    private:
        float inch, feet;
    
    public:
        void getData()
        {
            cout << "Enter distance in inch-feet: \n";
            cin>>inch>>feet;
        }

        void display()
        {
            cout<<"The Distance is: \n";
            cout<<feet<<" feet and "<<inch<<" inch.\n";
        }

        friend void add(DM &, DB &);
};

void add(DM &a, DB &b)
{
    int choice, cmSum = 0, inSum = 0;   
    do
    {
        cout << "1> Result in Kilometer,Meter & Centimeter.\n";
        cout << "2> Result in Feet & Inch.\n";
        cout << "3> EXIT\n";
        cout << "Enter your Choice ->\n";
        cin >> choice;
        switch(choice)
        {
            case 1:
                DM dmObj;
                cmSum = a.kms * 100000 + a.mts * 100 + a.cms + b.feet * 30.48 + b.inch * 2.54;

                if (cmSum >= 100000)
                {
                    dmObj.kms = cmSum / 100000;
                    dmObj.mts = (cmSum % 100000) / 100;
                    dmObj.cms = (cmSum % 100000) % 100;
                }
                else if (cmSum >= 100)
                {
                    dmObj.kms = 0;
                    dmObj.mts = cmSum / 100;
                    dmObj.cms = cmSum % 100;
                }
                else
                {
                    dmObj.kms = 0;
                    dmObj.mts = 0;
                    dmObj.cms = cmSum;
                }
                dmObj.display();
                break;
            
            case 2:
                DB dbObj;
                inSum = a.kms * 39370.1 + a.mts * 39.37 + a.cms * .3937008 + b.feet * 12 + b.inch;

                if (inSum >= 12)
                {
                    dbObj.feet = inSum / 12;
                    dbObj.inch = inSum % 12;
                }
                else
                {
                    dbObj.feet = 0;
                    dbObj.inch = inSum;
                }

                dbObj.display();
                break;
            
            case 3:
                exit(0);
                break;
        }
    }while(choice != 3);
}

int main()
{
    DM input1;
    DB input2;
    input1.getData();
    input2.getData();
    add(input1, input2);
    return 0;
}
