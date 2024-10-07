#include<stdio.h>
int main(){
    int arr[5];
    int *p;
    int i;
    p=arr;
    for(i=0;i<5;i++){
        printf("enter a no.");
        scanf("%d",p+i);
    }
    for(i=0;i<5;i++){
        printf("\nits data is%d ",*(p+i));
        return 0;
    }
}