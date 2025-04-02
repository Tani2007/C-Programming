#include <stdio.h>
int main(){
    int a,b;
    //! float b; //if b is float now you would use %f not %d.
    a=10;
    b=6;
    // b=10.12;
    printf("a + b = %d\n",a+b);
    printf("a - b = %d\n",a-b);
    printf("a * b = %d\n",a*b);
    printf("a / b = %d\n",a/b);//! it will give you 10/6 = 1 as "/" this operator give integer value not float.
    //todo when float is used use %f not %d.
    // printf("a + b = %f\n",a+b);
    // printf("a - b = %f\n",a-b);
    // printf("a * b = %f\n",a*b);
    // printf("a / b = %f\n",a/b);

    //? if a==b//output = 1(true) else output = 0(false)
}