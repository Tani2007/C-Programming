#include<stdio.h>
void starPattern(int num){
    for(int i=0;i<=num;i++){
        for(int j=0; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
void reverseStar(int num){
    for(int i = num ; i>=0 ; i--){
        for(int j = 0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int num = 5;
    starPattern(num);
    reverseStar(num);
}