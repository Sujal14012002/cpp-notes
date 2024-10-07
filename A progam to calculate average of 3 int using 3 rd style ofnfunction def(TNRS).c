#include<stdio.h>
float average();
int main(){
    float d;
    d=average();
    printf("average is %.1f",d);
    return 0;
}
float average(){
    float i;
    int a,b,c;
    printf("enter a three integer ");
    scanf("%d %d %d",&a,&b,&c);
    i=(float)(a+b+c)/3;
    return i;
}