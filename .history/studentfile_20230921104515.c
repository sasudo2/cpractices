#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *fp;
    int roll;
    char name[20], address[30];
    printf("enter roll number: ");
    scanf("%d", &roll);
    printf("enter name : ");
    gets(name);
    printf("enter address: ");
    gets(address);
    return 0;
}