#include<stdio.h>
int main(){

    for(int i = 0; i<=10;i++){
        int age;
        
        printf("%dEnter your age",i);
        scanf("%d",&age);
        if(age>10){
            continue;//loop will not go after this line it will iterate again.
        }
        printf("hey");
        
        if(age>10){
            break;
        }
    }
}