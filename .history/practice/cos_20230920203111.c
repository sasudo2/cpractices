#include <stdio.h>
#include <math.h>

int main(){
    double a = 1, b, x, cos = 1;
    int i = 1;
    x = 1;
    b = 1;
    while(a < 10e-6){
        b = b*i;
        i++;
        a = pow(-1,i-1)*pow(x, i)/b;
        x++;
        cos = cos + a;
    }
    printf("%lf", cos);
    return 0;

}