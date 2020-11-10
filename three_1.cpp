#include<bits/stdc++.h>
using namespace std;
class traingle {
    private:
        float base;
        float hight;
        float area;
    public:
        void getData(){
            cout<<"enter the base of the triangle:";
            cin>>base;
            cout<<"enter the hight of the triangle:";
            cin>>hight;
        }
        void areaTri(){
            area = 0.5*base*hight;
            cout<<"area of the traingle is "<<area<<endl;
        }
};
int main(){

    traingle t;
    for(int i=0;i<10;i++){
        t.getData();
        t.areaTri();
    }
}