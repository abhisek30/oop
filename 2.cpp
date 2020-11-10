#include<bits/stdc++.h>
using namespace std;
int x = 10;
int main(){
    int x = 20;
    cout<<"global = "<<::x<<endl;
    cout<<"local ="<<x<<endl;
}