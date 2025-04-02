//todo Array and Pointers Arithmatic
//operators are ,++,--,+,-
#include <stdio.h>
int main(){
    // int a = 30;
    // int* ptra = &a;
    // printf("%d\n",ptra);
    // printf("%d\n",ptra +1);//add 4(or a fixed size) to the previous size of ptra
    // char b = '3';
    // char* ptrb = &b;
    // printf("%d\n",ptrb);
    // printf("%d\n",ptrb-2);

    int arr[] = {1,2,3,4,5,6,7,8};
    // int* ptr =   arr[0];
    printf("the address of first element of array is %d\n",&arr[0]);
    printf("the address of first element of array is %d\n",arr);
    printf("the addres  of second element of array is %d\n",arr+1);
    printf("the addres  of second element of array is %d\n",&arr[1]);

    printf("the value at address of first element of array is %d\n",*(&arr[0]));
    printf("the value at address of first element of array is %d\n",*(arr));
    printf("the value at addres  of second element of array is %d\n",*(arr+1));
    printf("the value at addres  of second element of array is %d\n",*(&arr[1]));
}