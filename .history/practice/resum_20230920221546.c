#include <stdio.h>

int sum(int n){
    int a;
    if(n%5 == 0 && n%3 !=0){
        a = n;
    }
    return a + sum(n);
}

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    printf("sum is %d", sum(n));
    return 0;
}