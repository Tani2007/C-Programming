#include<stdio.h>
int fibbonaci(int num){
     if(num == 0 || num ==1){
        return num;
     }
     else{
        return fibbonaci(num-1) + fibbonaci(num-2);
     }
}
int fibbonacci2(int num2){
    int a,b,c;
    a=0;
    b=1;
    c=a+b;
    int num3 = 0;
    for(int i = 0 ; i <= num2-2; i++){
        
        a=b;
        b=c;
        num3 = c;
        c = a+b;
    }
    return num3;
}
int main (){
    printf("the fibbonacci of this number is %d \n",fibbonacci2(4));
    printf("the fibbonacci of this number is %d \n",fibbonaci(4));
}