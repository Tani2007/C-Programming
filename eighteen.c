//Type Cating Syntax;
// (type) value
#include<stdio.h>
int main(){
    int a = 10;
    float b = 54/10;//!output sholud be 5.4 but it is 5.0 as 54 is a integer and 10 is also a integer and if you  divide both of them you will  get an integer.
    float c = (float) 54/10;//!this will give you 5.4 a output
    printf("the value of a is %f\n",c);
}