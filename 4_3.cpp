#include<bits/stdc++.h>
using namespace std;
class NUMBER2;          //Forward declaration
class NUMBER1 {
    private:
        int a;
    public:
        void getData(int num){  
            a = num;
        }
    friend void compare(NUMBER1,NUMBER2);
};
class NUMBER2 {
    private:
        int b;
    public:
        void getData(int num){
            b = num;
        }
    friend void compare(NUMBER1,NUMBER2);
};
void compare(NUMBER1 num1,NUMBER2 num2){
    if(num1.a >= num2.b){
        cout<<num1.a<<" is greater than "<<num2.b<<endl;
    }
    else{
        cout<<num2.b<<" is greater than "<<num1.a<<endl;
    }
}
int main(){

    NUMBER1 a;
    NUMBER2 b;
    a.getData(10);
    b.getData(20);

    compare(a,b);
}