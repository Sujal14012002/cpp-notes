#include<iostream>
using namespace std;
int main(){
    char buttom;
    cout<<"enter a char ";
    cin>>buttom;
    switch(buttom){
        case 'd':
        cout<<"hero";
        break;
        case 'm':
        cout<<"villen ";
        default:
        cout<<"no";
    }
    return 0;
    
}