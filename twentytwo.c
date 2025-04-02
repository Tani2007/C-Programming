#include<stdio.h>
int main(){
    int num;
    int num2;
    printf("1.km to m\n");
    printf("2.km to cm\n");
    printf("3.m to cm\n");
    printf("4.cm to mm\n");
    printf("enter number to convert\n");
    scanf("%d",&num2);
    printf("enter your selection\n");
    scanf("%d",&num);
    switch(num){
        case 1:
        printf("%d",num2 * 1000);
        break;
        case 2:
        printf("%d",num2 * 100000);
        break;
        case 3:
        printf("%d",num2 * 100);
        break;
        case 4: 
        printf("%d",num2 * 10);
        break;

    }
}