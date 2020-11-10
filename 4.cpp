#include<bits/stdc++.h>
using namespace std;
void funArea(){
    cout<<"inappropriate message"<<endl;
}
void funArea(int i){
    float pi = 3.14,area;
    area = pi*i*i;
    cout<<"area of a circle="<<area<<endl;
}
void funArea(int i,int j){
    int area = i*j;
    cout<<"area of a rectrangle="<<area<<endl;
}
void funArea(int i,int j,int k){
    int volume = i*j*k;
    cout<<"volume of a box="<<volume<<endl;
}
int main(){

    funArea();
    funArea(5);
    funArea(5,10);
    funArea(10,20,30);
}