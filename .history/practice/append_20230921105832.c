#include <stdio.h>

int main(){
    FILE *fp;
    char a[30];
    printf("enter any string: ");
    scanf("%[^\n]s", &a);
    return 0;
}