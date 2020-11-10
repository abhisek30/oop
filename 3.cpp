#include<bits/stdc++.h>
using namespace std;
void find(int i){

    float pi = 3.14,area;
    area = pi*i*i;
    cout<<"area of a circle="<<area<<endl;
}
void find(float i){
    float pi=3.14,volume;
    volume = (4/3)*pi*i*i*i;
    cout<<"volume of a circle="<<volume<<endl;
}
int main(){

    int r;
    float radius;
    cout<<"enter radius of a circle:";
    cin>>r;
    find(r);
    cout<<"enter radius of a sphere:";
    cin>>radius;
    find(radius);
}