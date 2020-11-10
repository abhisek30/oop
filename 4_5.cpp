#include<bits/stdc++.h>
using namespace std;
class DB;
class DM{
    private:
        int meters;
        int centimeters;
        int totalCentimeters;
    public:
        void getData(){
            cout<<"Enter the distance in meters and centimeters:\n";
            cout<<"Meter:";
            cin>>meters;
            cout<<"Centimeter:";
            cin>>centimeters;
            totalCentimeters = meters*100 + centimeters;
        }
        void showData(){
            cout<<"Distance in meters and centimeters:\n";
            cout<<meters<<":Meters "<<centimeters<<":Centimeters";
        }
        friend DM add(DB,DM);
};
class DB{
    private:
        int feet;
        int inches;
        int totalCentimeters;
    public:
        void getData(){
            cout<<"Enter the distance in feets and inches:\n";
            cout<<"Feet:";
            cin>>feet;
            cout<<"Inches:";
            cin>>inches;
            totalCentimeters = 30.48*feet + 2.54*inches;
        }
        void showData(){
            cout<<"Distance in feet and inches:\n";
            cout<<feet<<":Feet "<<inches<<":Inch";
        }
        friend DM add(DB,DM);
};
DM add(DB distance1,DM distance2){
    DM sum;
    sum.totalCentimeters = distance1.totalCentimeters + distance2.totalCentimeters;
    sum.meters = sum.totalCentimeters/100;
    sum.centimeters = sum.totalCentimeters%100;

    return sum;
}
int main(){

    DB distance1;
    DM distance2,sum;

    distance1.getData();
    distance2.getData();

    sum = add(distance1,distance2);
    sum.showData();



}