#include<stdio.h>
int fact(int);
int main(){
    int n,f;
printf("enter a no.");
scanf("%d",&n);
f=fact(n);
printf("factorial is %d",f);
return 0;
}
 int fact(int n){
    int i=1;
    while(n>1){
        i=n*i;
        n--;
    }
    return i;
}