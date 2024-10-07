#include<stdio.h>
int main(){
    char str[10];
    int i;
    char *p;
    p=str;
    printf("enter a charcter ");
    scanf("%s",p);
    for(i=0;str[i]!='\0';i++){
        printf("\n%c",str[i]);
    }
return 0;

}