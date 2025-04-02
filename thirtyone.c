//todo here i wil show you how to call a function by its reference.
//*it will chnage the value of the arguments globally but if you will call a function by value then it will only chnage the value of variable locally.
#include<stdio.h>
int temp(int*a , int*b){
    int temp = *a;
    *a=*b;
    *b=temp;
    return 0;
}
int main(){
    int a = 4;
    int b =5;
    printf("the val of a and b are %d and %d\n",a,b);
    temp(&a,&b);
    printf("the val of a and b are %d and %d\n",a,b);
}