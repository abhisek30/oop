#include<bits/stdc++.h>
using namespace std;
class SAMPLE {
    private:
        int i,j;
    public:
        SAMPLE(int a,int b){
            i=a;
            j=b;
        }
        SAMPLE(SAMPLE &s){
            i = s.i;
            j = s.j;
        }
        void displayData(){
            cout<<i<<"- value of i,"<<j<<"- value of j"<<endl; 
        }
};
int main(){
    SAMPLE s1(10,20);
    SAMPLE s2(s1);          //type 1 of calling copy constructor,s1 codied to s2
    SAMPLE s3 = s1;         //type 2 of calling copy constructor,s1 copied to s3
    cout<<"For SAMPLE object 1:\n";
    s1.displayData();
    cout<<"For SAMPLE object 2:\n";
    s2.displayData();
    cout<<"For SAMPLE object 3:\n";
    s3.displayData();
}