#include<bits/stdc++.h>
using namespace std;
class CIRCLE{
    private:
        int radius;
        int area;
    protected:
        int r;
    public:
        CIRCLE(int rad){
            radius = rad;
            r = radius;
        }
        void calArea(){
            area = 3.14*radius*radius;
            display();
        }
        void display(){
            cout<<"Area of the circle:"<<area<<endl;
        }
};
class RECTRANGLE:public CIRCLE{
    private:
        int length;
        int breadth;
        int area;
    public:
        CIRCLE(int breadth);
        void calArea(){
            area = length*breadth;
            show();
        }
        void show(){
            cout<<"Area of rectrangle:"<<area<<endl;
        }
};
int main(){
    int radius,breadth;
    cout<<"Enter the Radius for Circle:";
    cin>>radius;
    cout<<"Enter the Breadth for Rectrangle:";
    cin>>breadth;
    CIRCLE c1(radius);
    RECTRANGLE r1(breadth);
    c1.calArea();
    r1.calArea();   
}