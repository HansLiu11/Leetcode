#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

int data_arr[SIZE] = {1, 0, 2, 3, 0, 4, 5, 0};

void duplicateZeros(int* arr, int arrSize){
    int i,j;
    for(i=0 ; i<arrSize; ++i){
        if(!arr[i]){  
            for(j=arrSize-1; j>i ; --j){ // 將 index i+1 之後element右移，同時arr[i+1] = 0 
                arr[j] = arr[j-1];
            }
            i += 1;                     //跳過複製的0
        }
    }
}

int main(){
    int i;
    int offset = 0;
    char str[25];

    duplicateZeros(data_arr, SIZE);
    puts("c result :\n");
    for( i=0 ; i<SIZE ; i++) {   
        int j= *(data_arr+i);
        offset += sprintf(str+offset, "%d ", j);
    }
    puts(str);
    return 0;
}