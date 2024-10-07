#include<stdio.h>
float average();
int main(){
    float d;
    d=average();
    printf("average is %f",d);
    return 0;

}
float average(){
    int i,n,sum=0,a;
    float x;
    printf("enter integer");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter a integer");
        scanf("%d",&a);
        sum=a+sum;
    }
    x=(float)(sum)/n;
    return x;
}