#include <stdio.h>
#include <stdlib.h>

int reverse(int x){
    unsigned long long ans = 0;
    
    while (x != 0){
        ans = ans * 10 + x % 10;
        x /= 10;
    }
    
    return (ans < INT_MAX || ans > INT_MIN) ? ans : 0;
}

int main(){
    printf("%d\n", reverse(-12345678));
    return 0;
}