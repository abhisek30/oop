#include<bits/stdc++.h>
using namespace std;
void swapByValue(int a,int b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    cout<<"a = "<<a<<" , b = "<<b<<" inside the call by value function.\n";
}
void swapByReference(int &a, int &b){
    int temp =0;
    temp = a;
    a = b;
    b = temp;
    cout<<"a = "<<a<<" , b = "<<b<<" inside the call by reference function.\n";
}
void swapByAddress(int *a,int *b){
    int temp=0;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<"a = "<<*a<<" , b = "<<*b<<" inside the call by Address function.\n";
}
int main(){
    int a,b,option=0;
    cout<<"enter two numbers:\n a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;

    cout<<"a = "<<a<<" , b = "<<b<<" Initial value before going inside call by value function.\n";
    swapByValue(a,b);
    cout<<"a = "<<a<<" , b = "<<b<<" value after the call by value function.\n\n";

    cout<<"a = "<<a<<" , b = "<<b<<" Initial value before going inside call by reference function.\n";
    swapByReference(a,b);
    cout<<"a = "<<a<<" , b = "<<b<<" value after the call by reference function.\n\n";

    cout<<"a = "<<a<<" , b = "<<b<<" Initial value before going inside call by address function.\n";
    swapByAddress(&a,&b);
    cout<<"a = "<<a<<" , b = "<<b<<" value after the call by address function.\n\n";

    int e = 400*400/400;
    cout<<e<<endl;

}