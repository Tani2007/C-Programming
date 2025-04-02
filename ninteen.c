//todo Functions:
#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
void printStar(int a){
    for(int i =0; i<a;i++){
        printf("%c\n",'*');//! ('char') and ("string") single quotes id char and double quotes id string
    }
}
int userNumber(){
    int i;
    printf("enter a number\n");
    scanf("%d",&i);
    printf("Your enterd number is %d\n",i);
}
void printOnly(){
    printf("hey this is a void function\n");
}//!this is a void function obly print something
int main(){
    int a,b,c;
    a = 9;
    b=10;
    c = sum(a,b);
    printf("%d\n",c);
    printOnly();
    printStar(10);
    userNumber();
}