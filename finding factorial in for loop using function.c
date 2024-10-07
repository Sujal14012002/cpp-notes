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
  int i;
   for(i=1;n>1;n--){
    i=n*i;
   }
   return i;
 }