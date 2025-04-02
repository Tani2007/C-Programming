//POinters in C 
//? It is a variable which stores the address of another variable.
//* as int stores the data type of integer value only but  it can store the value of any other data type. eg array pointer ,function pointer, char pointer
//? &a is the address of that variable in that memory location.
// ! (*) ka matlab hota hai ki jisko bhi wo pointer point kar raha hai uski value print kar do.
#include<stdio.h>
int main(){
    printf("pointers");
    int a=12;
    printf("The value of a is %d\n",a);
    int* ptr = &a;//here i have created a pointer.
    printf("our pointer is gonna be awesome %d\n",*ptr);
    printf("now the address of ptr is %x\n",&ptr);
    printf("the address of p in another form is %p\n",ptr);
    //todo null pointer = a pointer that stores nothing.
    int*ptr2 = NULL;
    printf("the value or add ress of null pointer is gonna be %p\n",ptr2);//0000
}