# include<stdio.h>
# include<stdlib.h>
# define SIZE 9

int arr[SIZE] = {9,6,4,2,3,5,7,0,1};

int missingNumber(int* nums, int numsSize){
    int i;
    int ans = 0;
    for(i=0; i<=numsSize;++i){
        ans ^= i;
    }

    for(i=0; i<numsSize; ++i){
        ans ^= nums[i];
    }

    return ans;
}

int main(){
    int res;
    res = missingNumber(arr,9);
    printf("%d\n", res);

    return 0;
}