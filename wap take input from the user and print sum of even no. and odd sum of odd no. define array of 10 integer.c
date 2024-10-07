#include<stdio.h>
int main(){
    int i,soe=0,sod=0;
    int arr[10];
   for(i=0;i<=9;i++){
         printf("enter a no.");
    scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            soe=soe+arr[i];
        }
        else{
            sod=sod+arr[i];
        }
    }
    printf("enter sum of even no.%d\n",soe);
    printf("sum of odd no.%d",sod);
    return 0;
}