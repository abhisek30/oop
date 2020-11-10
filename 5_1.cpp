#include<bits/stdc++.h>
using namespace std;
class COMPLEX {
    private:
        int real;
        int imaginary;
    public:
        COMPLEX(){
            int real =0;
            int imaginary=0;
        }
        COMPLEX(COMPLEX a,COMPLEX b){
            real = a.real + b.real;
            imaginary = a.imaginary + b.imaginary;
        }
        void getData(){
            real = 10;
            imaginary = 15;
        }
        void display(){
            if(imaginary>=0)
            cout<<"Addition of both the complex is "<<real<<" + i"<<imaginary<<endl;
            else
            cout<<"Addition of both the complex is "<<real<<" - i"<<imaginary<<endl;
        }
};
int main(){
    COMPLEX one,two,three;
    /* COMPLEX one(5,6);
    COMPLEX two(7,10); */
    one.getData();
    two.getData();
    three(&one,&two);
    three.display();
    return 0;
}