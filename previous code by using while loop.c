#include<stdio.h>
int main(){
    char str[10];
    char *p;
    p=str;
    printf("enter a charcter ");
    scanf("%s",p);
    while(*(p)!=0){
        printf("\n%c",*p);
        p++;
    }
    return 0;
}