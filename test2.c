#include<stdio.h>

int main(){
    int a=9;
    while(1){
        if(a==1) break;

        else if(a%2==1){
            a=3*a+1;
            printf("%d\n",a);
        }

        else{
            a=a/2;
            printf("%d\n",a);
        }
    }
}