#include<bits/stdc++.h>
using namespace std;
class DISTANCE{
    private:
        int feet;
        int inches;
    public:
        DISTANCE(int feet,int inches){
            this->feet = feet;
            this->inches = inches;
        }
        void showData(){
            cout<<"Distance in feet and inches:\n";
            cout<<feet<<":Feet "<<inches<<":Inch";
        }
        friend DISTANCE add(DISTANCE,DISTANCE,DISTANCE);
};
DISTANCE add(DISTANCE d1,DISTANCE d2,DISTANCE result){
    result.feet = d1.feet + d2.feet;
   result.inches = d1.inches + d2.inches;

   // convert inches to feet if greater than 12
   while (result.inches >= 12.0) {
      result.inches = result.inches - 12.0;
      ++result.feet;
   }

    return result;
}
int main(){

    DISTANCE distance1(12,34);        //implicit call
    DISTANCE distance2 = DISTANCE(34,56);   //explicit call
    DISTANCE sum(0,0);


    sum = add(distance1,distance2,sum);
    sum.showData();



}