#include <stdio.h>

int sum(int n, int b){
    if(n == 0){
        return b;
    }
    if(n%5 == 0 && n%3 !=0){
        return b + n + sum(n-1, b + n);
    }
    else{
        return sum(n-1, b);
    }
    
}

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    printf("sum is %d", sum(n, 0));
    return 0;
}