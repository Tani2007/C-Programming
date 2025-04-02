#include<stdio.h>
int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    int i = 0;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=num);
}