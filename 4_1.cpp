#include<bits/stdc++.h>
using namespace std;
class AREA {
    private:
        int length;
        int breadth;
        int area;
    public:
        friend void Calarea(AREA);
        void getData(){
            cout<<"enter lenght of the rectrangle:";
            cin>>length;
            cout<<"enter breadth of the rectrangle:";
            cin>>breadth;
        }
        void Calarea(){

            area = length*breadth;

            cout<<"Area:"<<area<<endl;
        }
};
void Calarea(AREA a){

    a.area = a.length*a.breadth;
    cout<<"Area:"<<a.area<<endl;

}
int main(){
    AREA a;
    a.getData();
    a.Calarea();    //area calculation by member function
    Calarea(a);     //area calculation by friend function
}