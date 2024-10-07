#include<stdio.h>
void average();
int main(){
    average();
    return 0;
}
void average(){
    int a,b,c;
    float i;
    printf("enter a three no.");
    scanf("%d %d %d",&a,&b,&c);
    i=(float)(a+b+c)/3;
    printf("average is %f",i);
}