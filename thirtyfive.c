//todo To use functions of strings you will have to import some library like <string.h>
//? strcat("hello","world")//it will give me concatenated hello world like this "helloworld"

//? strlen()//this will give me length of str but it do not counts null character eg-> strlen("hey") = 3

//? strrev()//reverse the string

//? strcpy()//copies 1 str into other eg-> strcpy(s2,s1) = this will copy s1 into s2.

//? strcmp() //it compares the ascii charecter difference eg-> strcpm(s1,s2)//if s1 and s2 mathes with no difference it will return me 0 if not matches then it will return me negative or positive value.
#include<stdio.h>
#include<string.h>
int main(){
    char str1[] =  "Tanishq";
    char str2[] = "Saxena";
    //puts(strcat(str1,str2));//! but this function stores tanishqsaxena in str1 and now length  of  str1  = 13
    printf("the length of str1 id  %d\n",strlen(str1));
    // printf("the reverse of str1 is %s",strrev(str1));
    puts(strrev(str1));//this will also work
    char str3[75] ;
    strcpy(str3,strcat(str1,str2));
    puts(str3);
    //! these all the above function make changes to the original function.
}