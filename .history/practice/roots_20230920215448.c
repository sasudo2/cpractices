#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, img1, img2, real1, real2;
    printf("enter a, b, c of ax^2+bx+c: ");
    scanf("%f%f%f", &a, &b, &c);
    float disc = b*b - 4*a*c;
    if(disc >= 0){
        real1 = (-b+sqrt(disc))/2;
        real2 = (-b-sqrt(disc))/2;
        printf("roots are %f, %f", real1, real2);
        return 0;
    }
    if(disc < 0){
        real1 = -b/2;
        real2 = real1;
        img1 = sqrt(4*a*c - b*b);
        img2 = sqrt(4*a*c - b*b);
        printf("roots are %f%+fi, %f%-fi", real1, img1, real2, img2);
        return 0;
    }
}