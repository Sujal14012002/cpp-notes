#include<stdio.h>
int main(){
    char card;
    int n;

    int p;
    
    int a;

    int b;

    int diff;

    int i;

    char cad;

    printf("welcome to the ATM\n\n");

    printf("please insert your card\n\n");
    scanf("%c",&card);

    if(card=='k'){
        printf("hello ken keneki\n\n");

        printf(">press 1 to withdraw the money from your account \n\n");
        printf(">press 2 to check your balance\n\n");


        b=50000;


        scanf("%d",&n);
        if(n==1){

            printf("please enter your 4 digit no.\n");
            scanf("%d",&p);

            if(p==1234){

                printf("enter the amount be withdraw:\n ");
                scanf("%d",&a);
                if(a>b){
                    printf("insufficient");
                }
                else{
                    printf("collect the money\n\n");

                    diff=b-a;

                    printf("now,your bank balnce is %d",diff);

                }
            }
            else{
                printf("your request has been blocked\n");
                printf("so please try again");
            }

        }
        else if(n==2){
    printf("enter your four digit no.\n");
    scanf("%d",&p);
if(p!=1234){
    printf("please try again\n");
    printf("so please try agin");  
}
else{
    printf("your bank balance is %d",b);
}
}

    }
    else if(card=='s'){
        printf("hello sasuika uchiha\n\n");

        printf(">press 1 withdraw money from your account\n\n");
        printf(">press 2 to check balance\n\n");
        b=100000;
        scanf("%d",&n);
        if(n==1){
            printf("please enter your 4 digit no.\n");
            scanf("%d",&p);
            if(p==5678){
                printf("enter the amount to be withdraw :\n");
                scanf("%d",&a);
                if(a>b){
                    printf("insufficent ");
                }
                else{
                    printf("collect the money\n\n");

                    diff=b-a;
                    printf("now,your bank balnce is %d",diff);
                }
            }
            else{
                printf("your request has been blocked\n");

                printf("so please try agin");
                
            }
        }
    
    else if(n==2){
        printf("please enter your 4 digit no.\n\n");
        scanf("%d",&p);
        if(p!=5678){
            
            printf("please try again\n\n");

            scanf("%d",&p);

            if(p!=5678){
                printf("your request has been blocked\n");
                printf("so,please try agin");
            }
            else{
                printf("your balance is %d",b);
            }
        }
    }}
    else if(card=='i'){
        printf("hello itachi uchiha\n\n");

        printf(">press 1 to withdraw the money from your account \n\n");
        printf(">press 2 to check the balance\n\n");
        b=60000;

        scanf("%d",&n);

        if(n==1){
            printf("please enter your 4 digit pin:\n");
            scanf("%d",&p);
            if(p==9123){
                printf("enter the amount too be withdraw :\n");
                scanf("%d",&a);
                if(a>b){
                    printf("insufficent balance ");
                }
                else{
                    printf("collect themoney\n\n");
                    diff=b-a;
                    printf("your remaining bank balance is %d",diff);
                }
            }
            else{
                printf("incorrect pin\n\n");

                printf("please try again\n\n");

                scanf("%d",&p);

                if(p==9123){
                printf("enter the amount too be withdraw :\n");
                scanf("%d",&a);
                if(a>b){
                    printf("insufficent balance ");
                }
                else{
                    printf("collect themoney\n\n");
                    diff=b-a;
                    printf("your remaining bank balance is %d",diff);
                }
        }else{
                          printf("incorrect pin\n\n");
                                          printf("Your card has been blocked\n\n");

  
        }
            }
        }
    }
    else if(card=='l'){
        printf("hello light yagmini\n\n");

        printf(">press 1 withdraw money from your account\n\n");
        printf(">press 2 to check balance\n\n");
        b=40000;
        scanf("%d",&n);
        if(n==1){
            printf("please enter your 4 digit no.\n");
            scanf("%d",&p);
            if(p==8123){
                printf("enter the amount to be withdraw :\n");
                scanf("%d",&a);
                if(a>b){
                    printf("insufficent ");
                }
                else{
                    printf("collect the money\n\n");

                    diff=b-a;
                    printf("now,your bank balnce is %d",diff);
                }
            }
            else{
                printf("your request has been blocked\n");

                printf("so please try agin");
                
            }
        }
    
    else if(n==2){
        printf("please enter your 4 digit no.\n\n");
        scanf("%d",&p);
        if(p!=8123){
            
            printf("please try again\n\n");

            scanf("%d",&p);

            if(p!=8123){
                printf("your request has been blocked\n");
                printf("so,please try agin");
            }
            else{
                printf("your balance is %d",b);
            }
        }
    }}
    return 0;
}
