#include <stdio.h>

int main(){
    int a = 10, *b, **c;
    b = &a;
    c = &b;
    int x = b +1;
    printf("%d\t%d\t%d\n", &a, &b);
    printf("%d\t%d\n", b, *c);
    printf("%d\t%d\n", c, **c);
    printf("%d\t%d\t%d\n", *b+5, &c+2, &b + 1);
}