#include<stdio.h>
int main(){
int arr[5];
    int i;
    for(i=0;i<=4;i++){
        printf("enter no.");
        scanf("%d",arr+i);
    }
    for(i=0;i<=4;i++){
        printf("\n%d",*(arr+i));
    }
return 0;

}