#include<bits/stdc++.h>
#include<math.h>
using namespace std;
//program 1:Write a program in to find size of fundamental data types in C++ labguage.
/* int main(){

    cout<<sizeof(int)<<"- size of integer data type\n";
    cout<<sizeof(char)<<"- size of char data type\n";
    cout<<sizeof(float)<<"- size of float data type\n";
    cout<<sizeof(double)<<"- size of double data type\n";

} */
//program 2:Write a program to check if two given non-negative integers have the same last digit.
/* int main(){
    int num1,num2;
    cout<<"enter two interger:\n";
    cin>>num1>>num2;
    if((num1%10)==(num2%10)){
        cout<<"Last digit are equal";
    }
} */
//program 3:Write a program to find out all roots of a quadratic equation
/* int main(){
    float a,b,c;
    float root1,root2;
    x:
    cout<<"program is to find roots of a quadratic equation\n";
    cout<<"enter the value of a in a(x^2)+bx+c:";
    cin>>a;
    cout<<"enter the value of b in a(x^2)+bx+c:";
    cin>>b;
    cout<<"enter the value of c in a(x^2)+bx+c:";
    cin>>c;
    if(a==0){
        cout<<"a=0 please enter valid quadratic equation\n";
        goto x;
    }   
    float d = (b*b) - (4*a*c);

    if(d>0){
    root1 = (-b + sqrt(d)) / (2*a) ;
    root2 = (-b - sqrt(d)) / (2*a) ;

    cout<<"root number 1:"<<root1<<endl;
    cout<<"root number 2:"<<root2;
    }

    else if(d==0){
        root1 = (-b + sqrt(d)) / (2*a);
        cout<<"Both roots are:"<<root1<<endl;
    }

    else 
    {
        cout<<"roots are imaginary"<<endl;
    }
} */
// program 4:Write a program in to check whether a number is prime or not.
/* int main(){
    int n,c;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2)
    cout<<"it is a prime number"<<endl;
    else
    cout<<"not a prime number"<<endl;
} */
//program 5:Write a program to find the Greatest Common Divisor (GCD) of two numbers.
/* int gcd(int i, int j){
    if(j%i==0)
    return i;
    else
    return gcd(j%i,i);
}
int main(){
    int a,b,c=0;
    cout<<"Enter number one:";
    cin>>a;
    cout<<"Enter number two:";
    cin>>b;
    if(a>b)
    c = gcd(a,b);
    else
    c = gcd(b,a);
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<c<<endl;
} */
//program 6:Write a program to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n. n is the user input.
/* int main(){
    double sum=0,d=0;
    int power=1,n=0;
    x:
    cout<<"Program to find sum of the series 1 + 1/2^2 + 1/3^3 + .... + 1/n^n where n is user defined"<<endl;
    cout<<"Enter value of n:";
    cin>>n;
    if(n==1){
    cout<<"Invalid input n should be greater than 1"<<endl<<"enter again"<<endl;
    goto x;}
    for(int i=1;i<=n;i++){
        power = pow(i,2);
        d = (double)1/power;
        sum  = sum + d;
    }
    cout<<"the sum of the series 1 + ";
    for (int i = 2; i <=n ; i++)
    {
        if(i==n)
        cout<<"1/"<<i<<"^"<<i<<" ";
        else
        cout<<"1/"<<i<<"^"<<i<<" + ";
    }
    cout<<"is "<<sum<<endl;
} */
//program 7:Write a program to find the smallest and largest elements in a given array of n integers.
int main(){
    int n,s=1000,b=0,small;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" integers for the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(b<=arr[i]){
            b = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            if(arr[j]<=arr[i]){
                if(arr[j]<=s){
                s = arr[j];
                }
            }
        }
    }
    cout<<"biggest number:"<<b<<" ,smallest number:"<<s<<endl;
}