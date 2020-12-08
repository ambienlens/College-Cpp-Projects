//Debayan Majumder
//To Add two duration (HH,MM,SS)

#include <iostream>
using namespace std;

class TimeAdd
{
    private:
        int hour, min, sec;
    public:
        TimeAdd(){}
        TimeAdd(int h, int m, int s): hour(h), min(m), sec(s){}
        TimeAdd AddTime(TimeAdd time)
        {
            TimeAdd out;
            out.sec = (sec + time.sec)%60;
            out.min = (min + time.min + ((sec + time.sec)/60))%60;
            out.hour = hour + time.hour + (min + time.min + ((sec + time.sec)/60))/60;
            return out;
        }
        void display()
        {
            cout<<"The Time -> Hours: "<<hour<<", Minutes: "<<min<<", Seconds: "<<sec<<endl;
        }
};

int main()
{
    int hrs, mins, secs;

    cout<<"Enter the Hours, Minutes and Seconds of parameter 1: \n";
    cin>>hrs>>mins>>secs;
    TimeAdd T1(hrs, mins, secs);
    T1.display();

    cout<<"Enter the Hours, Minutes and Seconds of parameter 2: \n";
    cin>>hrs>>mins>>secs;
    TimeAdd T2(hrs, mins, secs);
    T2.display();

    TimeAdd finalValue = T1.AddTime(T2);
    finalValue.display();
}