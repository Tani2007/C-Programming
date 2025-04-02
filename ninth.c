#include<stdio.h>
#define PI 3.14
int main(){
    int a = 8;
    float b = 7.333;

    // printf("val of a = %d and the val of b = %f",a,b);
    //! the below line will give you 2 digits after point as 0.2f is written there.
    // printf("val of a = %d and the val of b = %0.2f",a,b);
    //! the below line will give you a free space of 6digits and after that it will give you 2digits after point.
    // printf("val of a = %d and the val of b = %10.2f",a,b);
    //! 2.4f will not give you free space 6.4 fill also not give you free space but from 7 it will start giving you the space.at 7 it will give you 1 free space.
    // printf("val of a = %d and the val of b = %7.4f",a,b);
    //! it you write -7.4 then it will occupy the free space after the number
    //todo if you write number before point greter than your number length then it will start giving you the free space. her number length was 6 and we were giving 7.4 means 7>6 so one extra space would be there.


    //* Some Important Format Specifier :
    //* %c --> char
    //* %d --> int
    //* %f --> float
    //* %l --> long int
    //* %lf --> double
    //* %Lf --> long double

    //const a = 10; //now c can not be changed 

    printf("the val of pi is \a %f",PI);
    printf("hey \a");
    //PI = 7.4;//!this will give you error since pi is a contant.
}