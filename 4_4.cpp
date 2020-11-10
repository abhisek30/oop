#include<bits/stdc++.h>
using namespace std;
class COMPLEX {
    private:
        int real;
        int imaginary;
    public:
        COMPLEX(){
            real =0;
            imaginary =0;
        }
        void getData(){
            cout<<"Enter the real part:";
            cin>>real;
            cout<<"Enter the imaginary part:";
            cin>>imaginary;
        }
        void showData(){
            if(imaginary>0)
            cout<<"Sum:"<<real<<" + "<<imaginary<<"i\n";
            else
            cout<<"Sum:"<<real<<" - "<<imaginary<<"i\n";
        }
        friend COMPLEX add(COMPLEX,COMPLEX);
};
COMPLEX add(COMPLEX a,COMPLEX b){
    COMPLEX c;

    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;

    return c;

}
int main(){

    COMPLEX c1,c2,c3;

    cout<<"Enter the data for complex 1:\n";
    c1.getData();

    cout<<"Enter the data for complex 2:\n";
    c2.getData();

    c3 = add(c1,c2);
    c3.showData();
    
    return 0;
}