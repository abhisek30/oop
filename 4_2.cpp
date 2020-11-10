#include<bits/stdc++.h>
using namespace std;
class AREA{
    private:
        int side;
        int lenght;
        int breadth;
        int area;
    public:
        friend void area(AREA);
        void getData(){
            cout<<"Enter the lenght for rectrangle:";
            cin>>lenght;
            cout<<"Enter the breadth for rectrangle:";
            cin>>breadth;

            cout<<"Enter the side of the square:";
            cin>>side;
        }
};
void area(AREA a){

    a.area = a.side*a.side;
    cout<<"Area of the square:"<<a.area<<endl;

    a.area = a.lenght*a.breadth;

    cout<<"Area of the rectrangle:"<<a.area<<endl;

}
int main(){
    AREA a;
    a.getData();
    area(a);
}