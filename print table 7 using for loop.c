#include<stdio.h>
int main(){
    int i,j,sum=0;
    printf("enter a no.");
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}