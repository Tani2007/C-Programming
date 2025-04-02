#include<stdio.h>
void arrayRev(int * array){
    for(int i = 7 ; i>=0 ; i--){
        printf("%d ",*(array+i));
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    arrayRev(arr);

}