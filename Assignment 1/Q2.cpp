//Debayan Majumder
//Cpp program to create a banking problem

#include <iostream>
using namespace std;

class Banking
{
    private:
        int AC_No;
        string Name;
        char type;
        float InterestRate, Balance, MinBalance;
        int Counter;

    public:
        Banking()
        {
            AC_No = 0;
            Name = "";
            type = NULL;
            InterestRate = 0;
            Balance = 0;
            MinBalance = 0;
            Counter = 0;
        }
        
        Banking(int AC, string name, char Type, float IntR, float bal, float minBal): AC_No(AC), Name(name), type(Type), InterestRate(IntR), Balance(bal), MinBalance(minBal) {}

        void deposit(float depAmt)
        {
            Balance += depAmt;
            cout<<"Amount Deposited : "<<depAmt<<endl;
        }

        void withdraw(float withDraw)
        {
            if (Balance - withDraw > MinBalance)
            {
                Balance -= withDraw;
                cout<<"Amount Withdrawn : "<<withDraw<<endl;
            }
            else
                cout<<"Available Balance is LOW.\n";
        }

        void AccountDetails()
        {
            cout<<"Account Name -> "<<Name<<endl;
            cout<<"Account No -> "<<AC_No<<endl;
            cout<<"Type of Account -> "<<type<<endl;
            cout<<"Available Balance -> "<<Balance<<endl; 
        }

        int getAC_No()
        {
            return AC_No;
        }
};

int main()
{
    string name;
    char type;
    int counter = 100;
    float IntRate = 6.0;
    float MinBal = 2000;
    float amount;
    int free = 100;
    int n;
    int option;
    int i = 0;

    Banking *user = new Banking[100];
    cout<<"---WELCOME TO BANKING SERVICES---"<<endl;

    do
    {
        int accNo;
        int acc = -1;
        float amt;
        option = 0;
        cout<<"1> Open new Account.\n";
        cout<<"2> Deposit Amount.\n";
        cout<<"3> Withdraw Amount.\n";
        cout<<"4> Show Bank Details.\n";
        cout<<"5> EXIT\n";
        cin>>option;

        switch (option)
        {
            case 1:
                cout<<"Accounts Vacant -> "<<free<<endl;
                cout<<"Enter your name : "<<endl;
                cin>>name;
                cout<<"Account Category? Savings(S), Current(C) : "<<endl;
                cin>>type;
                cout<<"Amount to be deposited : "<<endl;
                cin>>amount;
                counter += 10;
                cout<<"Account Created!"<<endl;
                cout<<"Account Number -> "<<counter<<endl;
                cout<<"\n";
                free--;
                user[i] = Banking(counter, name, type, IntRate, amount, MinBal);

                i++;
                n = i;
                break;
            case 2:
                amt = 0;
                cout<<"Enter Account Number: \n";
                cin>>accNo;
                for(int i=0; i<n; i++)
                    if (user[i].getAC_No() == accNo)
                        acc = i;
                
                if (acc == -1)
                {
                    cout<<"No Accounts Found.\n";
                    break;
                }

                cout<<"Enter Amount to be deposited : "<<endl;
                cin>>amt;

                user[acc].deposit(amt);
                break;
            case 3:
                amt = 0;
                cout<<"Enter Account Number: \n";
                cin>>accNo;
                for(int i=0; i<n; i++)
                    if (user[i].getAC_No() == accNo)
                        acc = i;

                if (acc == -1)
                {
                    cout<<"No Accounts Found.\n";
                    break;
                }

                cout<<"Enter Amount to be withdrawn : "<<endl;
                cin>>amt;

                user[acc].withdraw(amt);
                break;
            case 4:
                cout<<"Enter Account Number: \n";
                cin>>accNo;
                for(int i=0; i<n; i++)
                    if (user[i].getAC_No() == accNo)
                        acc = i;
                
                if (acc == -1)
                {
                    cout<<"No Accounts Found.\n";
                    break;
                }

                user[acc].AccountDetails();
                break;
            case 5:
                cout<<"Exiting...\n";
                break;
            default:
                cout<<"Enter Correctly\n";
        }
    } while(option != 5);
    return 0;
}