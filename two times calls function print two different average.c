#include<stdio.h>
float average(int,int,int);
int main(){
    int a,b,c;
    float d;
    printf("enter 3 integer from the user ");
    scanf("%d %d %d",&a,&b,&c);
    d=average(a,b,c);
    printf("\ntotal average is%.1f",d);
    d=average(100,200,300);
    printf("\naverage is %.1f",d);

    return 0;

}
float average(int a,int b,int c){
    float d;
    d=(float)(a+b+c)/3;
    return d;
}