#include<bits/stdc++.h>
using namespace std;
class Time {
    private:
        int minutes;
        int secounds;
        int hours;
    public:
        Time(){
            minutes = 0;
            secounds = 0;
            hours = 0;
        }
        void getTime(){
            cout<<"Hours:";
            cin>>hours;
            cout<<"Minutes:";
            cin>>minutes;
            cout<<"Secounds:";
            cin>>secounds;            
        }
        void showTime(){
            cout<<hours<<" Hours:"<<minutes<<" Minutes:"<<secounds<<" Secounds"<<endl;
        }
        Time addTime(Time t1 , Time t2){

            Time temp;

            temp.secounds = t1.secounds + t2.secounds;
            temp.minutes = t1.minutes + t2.minutes + (temp.secounds/60);
            temp.hours = t1.hours + t2.hours + (temp.minutes/60);
            temp.minutes = temp.minutes % 60;
            temp.secounds = temp.secounds % 60;

            return temp;

        }

};
int main(){
    Time t1,t2,t3;
    cout<<"Enter Time 1 details:\n";
    t1.getTime();
    cout<<"Enter Time 2 details:\n";
    t2.getTime();

    t3 = t3.addTime(t1,t2);

    t1.showTime();
    t2.showTime();
    t3.showTime();

}