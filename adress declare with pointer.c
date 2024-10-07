#include<stdio.h>
int main(){
    int a=34;
    int*p;
    p=&a;
    printf("adress of %lu",p);
    return 0;
}