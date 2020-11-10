#include<bits/stdc++.h>
using namespace std;
class items {
    private:
        char code[20];
        char name[20];
        int price;
        int quantity;
        int total;
    public:
        void getData(){
            cout<<"Enter the code of the product:";
            cin>>code;
            cout<<"Enter the name of the product:";
            cin>>name;
            cout<<"Enter the price of the product:";
            cin>>price;
            cout<<"Enter the quantity of the product:";
            cin>>quantity;
        }
        int calTotal(){
            total = price * quantity;
            return total;
        }
        void display(){
            int i=0;
            cout<<i+1<<"\t"<<code<<"\t"<<name<<"\t"<<price<<"\t"<<quantity<<"\t"<<total<<"\t"<<endl;
        }
};
int main(){
    items abc[10];
    int totalSum = 0;
    for (int i = 0; i < 10; i++)
    {
        abc[i].getData();
        totalSum = totalSum + abc[i].calTotal();
    }

    cout<<"Sl.no\tCode\tName\tPrice\tQuantity\tTotal\t \n ------------------------------------------------------------"<<endl;

    for (int i = 0; i < 10; i++)
    {
        abc[i].display();
        
    }
    cout<<"-------------------------------------------------------------------------------\n";
    cout<<"                                                Total = "<<totalSum<<endl;
    
}