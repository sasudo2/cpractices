#include <stdio.h>

int main(){
    int a, b, c;
    printf("enter the number: ");
    scanf("%d", &a);
    while(a>10){
        c = 0;
        b = a;
        c = c + b%10;
        b = b/10;
        a = c;
    }
    printf("sum = %i", a);
    return 0;
}