#include<stdio.h>

// void recursion(int num){
//     printf("%d\n",num);
//     num--;
//     if(num!=0){
//         recursion(num);
//     }
// }
// int main(){
//     recursion(23);
// }
int factorial(int num){
    if(num==1){
        return 1;
    }
    else{
        return num * factorial(num-1);
    }
}
int main(){
    int result = factorial(5);
    printf("%d\n",result);
}