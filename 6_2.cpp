#include<bits/stdc++.h>
using namespace std;
class CIRCLE{
    protected:
        float radius;
    public:
    r = radius;
    void get(){
        cout<<"Enter the radius of the circle:";
        cin>>radius;
    }
    void calArea(){
        float area = 3.14*radius*radius;
        cout<<"Area of the circle with radius "<<radius<<" is "<<area<<endl;
    }
};
class RECTRANGLE:public CIRCLE{
    int breadth;
    public:
    void get1(){
        cout<<"Lenght of the rectrangle is same as radius of the circle.\n";
        cout<<"Enter the breadth of the rectrangle:";
        cin>>breadth;
    }
    void area(){
        float area1 = r * breadth;
        cout<<"Area of the rectranglr with length "<<r<<" and breadth "<<breadth<<" is "<<area1<<endl;
    }
};
class BOX:public RECTRANGLE{

};
int main(){
    RECTRANGLE r;
    CIRCLE c;
    c.get();
    r.get1();
    c.calArea();
    r.area();
}