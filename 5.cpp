#include<bits/stdc++.h>
using namespace std;
void sum(int a,int b=10,int c=20){
    int sum = a+b+c;
    cout<<sum<<endl;
}
int main(){
    int a,b,c,args=0;
    cout<<"how many agruments you want to enter(1 or 2 or 3)?:";
    cin>>args;
    if(args == 1){
        cout<<"enter a number:";
        cin>>a;
        sum(a);
    }
    else if(args == 2){   
        cout<<"enter two numbers:";
        cin>>a>>b;
        sum(a,b);
    }
    else{
        cout<<"enter three numbers:";
        cin>>a>>b>>c;
        sum(a,b,c);
    }
}