//Go to Statement
#include<stdio.h>
int main(){
    label:
        printf("we are inisde a label");
        goto end;
    printf("hey\n");
    goto label;
    end:
    printf("this is end");
}