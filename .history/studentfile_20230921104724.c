#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int roll;
    char name[20], address[30];
    printf("enter roll number: ");
    scanf("%d", &roll);
    printf("enter name : ");
    fflush(stdin);
    gets(name);
    fflush(stdin);
    printf("enter address: ");
    gets(address);
    return 0;
}