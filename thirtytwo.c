//todo array as function arguments.
#include<stdio.h>
int func1(int array[]){
    for(int i = 0; i<4; i++){
        printf("%d\n",array[i]);
    }
    array[0] = 32;//! value of the local main variable can be changed from here as we are passing the array as pointer to this function
}
int func2(int* arr){
    for(int i = 0; i<4;i++){
        printf("here add od array is gonnna be %d\n",*(arr+i));
    }
    *(arr + 2) = 32;
}
int func3(int arr[2][2]){
    for(int i = 0 ; i<2;i++){
        for (int j = 0; j < 2; j++)
        {
            printf("the value at index %d are %d\n",i,arr[i][j]);
        }
        
    }
}
int main(){
    // int arr[] = {2,4,3,5};
    //! first Approach
    // // printf("%d\n",arr);//! adderess of arr[0]
    // // printf("%d",*(arr+1));//!4
    // printf("the value first elem of array is %d\n",arr[0]);
    // func1(arr);
    // printf("the val of first elem of array is %d\n",arr[0]);
    //! second Approach
    // printf("the value of 2nd index value is %d\n",arr[2]);
    // func2(arr);
    // printf("the value of 2nd index after the function is %d\n",arr[2]);
    //! 3rd Approach
    int arr2[][2] = {{1,2},{3,5}};
    func3(arr2);
}