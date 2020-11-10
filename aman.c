#include<stdio.h>
#include<stdlib.h>
void foo(int *p){
    p = (int*)malloc(sizeof(int));
}
int main(){
    int *a;
    foo(a);
    *a = 6;


    
    printf("%d",*a);
    return 0;
}