#include<bits/stdc++.h>
using namespace std;
class Complex {
    public:
        int real;
        int imaginary;

        Complex(){

        }

        Complex(int r,int i){
            real = r;
            imaginary = i;
        }
        Complex add(Complex c1,Complex c2){
            Complex sum;
            
            sum.real = c1.real + c2.real;
            sum.imaginary = c1.imaginary + c2.imaginary;

            return sum;

        }
};
int main(){
    Complex one(4,9);
    Complex two(10,3);

    cout<<"complex number 1: "<<one.real<<" + i"<<one.imaginary<<"\n";
    cout<<"complex number 2: "<<two.real<<" + i"<<two.imaginary<<"\n";

    Complex three;

    three = three.add(one,two);

    cout<<"complex number 2: "<<three.real<<" + i"<<three.imaginary<<"\n";

}