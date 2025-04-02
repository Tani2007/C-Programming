//todo Structures in C
//* they are used to define data type in C  , they allow us to combine different data types together. it is used to create complex data type which contain diverse information are are pretty similar to array but they can stores data of any type , which is more useful.
#include<stdio.h>
#include<string.h>
struct StudentData{
    int id;
    int marks;
    // char favChar;
    char name[10];
};
struct StudentData obj;
    

int main(){
    struct StudentData tanishq;
    tanishq.id = 66;
    tanishq.marks = 100;
    strcpy(tanishq.name,"saxena");
    printf("the S.name of the student is %s \n",tanishq.name);
    printf("the id of student is gonna be %d \n ",tanishq.id);
    printf("the marks of student is gonna be %d \n ",tanishq.marks);
    //! but here this tanishq is a local variable to make it global use it outside block.
    obj.id = 32;
    printf("the if of obj is gonna be %d",obj.id);
    //! here i can access this obj variable from anywhere.
}