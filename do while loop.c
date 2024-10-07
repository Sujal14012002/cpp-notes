#include<stdio.h>
int main(){
    int a,b;
    char choice;
    do {
    printf("enter a no.");
    scanf("%d %d",&a,&b);
    printf("\nsum of no. is %d",a+b);
    printf("\nenter a char yes and no:");
    fflush(stdin);
    scanf("%c",&choice);
}
while(choice=='Y');
return 0;
}