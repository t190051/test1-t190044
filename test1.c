#include<stdio.h>

int main(){
    int n,a=1,i,k,s=1,t;
    while(1){
        s=s*2;
        if(s<0) break;
        t=s;
    }
    while(1){
        n=1;
        for(i=1;i<=a;i++){
            n=n*a;
        }
        if(n<t && n>0) printf("%d\n",n);
        else break;
        a++;
    }
}

