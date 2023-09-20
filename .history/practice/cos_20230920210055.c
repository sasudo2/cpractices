#include <stdio.h>
#include <math.h>
double fact(double b){
    double c = 1;
    for(double i = 1; i<= b; i++){
        c = c*i;
    }
    return c;
}
int main(){
    double a = 1, b, x, cos = 1;
    printf("enter angle in radian");
    scanf("%lf", &x);
    int i = 1;
    b = 1;
    while(a > 10e-6){

        b = fact(i*2);
        a = pow(x, i*2)/fact(i*2);
        cos = cos + a*pow(-1, i);
        i++;
        printf("a = %lf", a);
    }
    printf("cos = %lf", cos);
    return 0;

}