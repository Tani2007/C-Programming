//todo Strings.
//! there is no data type like string in C. but it can be represented by a character array.
//* store character array in single quotes when you are making a char array with null character.like this,
//? char name = {'t','a',n','i','s','h','q','\0} 
//! else do it like this char name[]="Tanishq" 
#include<stdio.h>
void printStr(char str[]){
    int i=0;
    while (str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    
}
int main(){
    char str[] = {'t','a','n','i','s','h','q','\0'};
    puts(str);//!prints str
    printf("the str is gona be %s\n",str);
    printStr(str);
    char name[] =  "Tanishq";
    printStr(name);

    char userInputStr[30];
    gets(userInputStr);
    puts(userInputStr);
}