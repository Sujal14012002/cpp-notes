#include<stdio.h>
int main(){
    int i,n,sum=1;
    printf("enter a integer ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum*i;
    }
    printf("enter fctoril is %d",sum);
    return 0;

}