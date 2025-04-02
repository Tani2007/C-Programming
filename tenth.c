#include<stdio.h>
int main(){
    // int a;
    // printf("Enter your age\n");
    // scanf("%d",&a);
    // if (a>18){
    //     printf("you can vote");
    
    // }
    // else{
    //     printf("no you cannot vote");

    // }
    int a = 0;
    printf("if Passed in maths write 1 if in scinece write 2 if in both write 3");
    printf("subject passed in");
    scanf("%d",&a);
    if(a==1){
        printf("your prize is 45rs");
    }else if(a==2){
        printf("your prize is 50rs");
    }else{
        printf("your prize is 100rs");
    }
}