#include <iostream>
using namespace std;

class travel
{
    private:
        string T_Code;
        int no_of_adults, no_of_children, Distance;
        float TotalFare;
    public:
        /*travel()
        {
            T_Code = "";
            no_of_adults = 0;
            no_of_children = 0;
            Distance = 0;
            TotalFare = 0;
        }*/
        travel(string TC, int a, int c, int d): T_Code(TC), no_of_adults(a), no_of_children(c), Distance(d) {}

        void AssignFare()
        {
            if(Distance >= 1000)
                TotalFare = no_of_adults*500 + no_of_children*250;
            else if(Distance < 1000 && Distance >= 500)
                TotalFare = no_of_adults*300 + no_of_children*150;
            else
                TotalFare = no_of_adults*200 + no_of_children*100;
        }

        void ShowTravel()
        {
            cout<<"User Name: "<<T_Code<<endl;
            cout<<"No. of Adults: "<<no_of_adults<<endl;
            cout<<"No. of Childrens: "<<no_of_children<<endl;
            cout<<"Distance Traveled: "<<Distance<<endl;
            cout<<"Total Fare billed: "<<TotalFare<<endl;
        }
};

int main()
{
    string name;
    int d, a, c;

    cout<<"Enter Name of User: ";
    cin>>name;
    cout<<"Enter the total distance: ";
    cin>>d;
    cout<<"Enter the total Adults: ";
    cin>>a;
    cout<<"Enter the total Childrens: ";
    cin>>c;
    
    travel user(name, a, c, d);
    user.AssignFare();
    user.ShowTravel();
    return 0;
}
