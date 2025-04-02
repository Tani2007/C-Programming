//Array 
#include<stdio.h>
int main(){
//todo 1d array
    // int marks[4];
    // marks[0] = 50;
    // marks[1] = 62;
    // marks[2] = 65;
    // marks[3] = 52;

// int marks[5] = {34,45,56,67,69};
// int marks[] = {34,45,56,67,69};

//     printf("Marks of studdents are %d\n",marks[0]);
//     printf("Marks of studdents are %d\n",marks[1]);
//     for(int i = 0; i< 4; i++){
//         printf("enter the marks you want to output");
//         scanf("%d",&marks[i]);
//     }
//     printf("Marks of studdents are %d\n",marks[0]);
//     printf("Marks of studdents are %d\n",marks[1]);
//todo 2d array
int marks[3][3] = {{2,3,4},{5,6,7},{8,9,1}};
for(int i = 0 ; i<3 ; i++){
    for(int j = 0; j<3; j++){
        printf(" %d",marks[i][j]);
    }
    printf("\n");//this will give you matrix
};
}