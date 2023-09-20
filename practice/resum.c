#include <stdio.h>

int sum(int n){
    if(n == 0){
        return 0;
    }
    if(n%5 == 0 && n%3 !=0){
        return n + sum(n-1);
    }
    else{
        return sum(n-1);
    }
    
}

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    printf("sum is %d", sum(n));
    return 0;
}