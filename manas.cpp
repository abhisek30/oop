#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,q=0;
    cin>>n;
    cin>>q;
    int i,j,max=0;
    int arr1[n][3];
    int arr2[q][3];
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    for(i=0;i<q;i++){
        for(j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }
    int k,val=0;
    while(k<q){
    for(j=0;j<3;j++){
        for(i=0;i<n;i++){
            if(max<=arr1[i][j]){
                max=arr1[i][j];
            }
        }
        if(max==arr2[k][j]){
            val = 0;
        }
        else
            val++;
        max=0;
    }
    k++;
    if(val==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}