#include<stdio.h>
int main(){
    int i,soe=0,sod=0,c=0;
    int arr[10];
   for(i=0;i<=9;i++){
         printf("enter a no.");
    scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            soe=soe+arr[i];
            c++;
        }
        else{
            sod=sod+arr[i];
        }
    }
    printf("enter sum of even no.%daverage of even is%f \n",soe,(float)soe/c);

    printf("sum of odd no.%d average is %f",sod,(float)sod/(10-c));
    return 0;
}