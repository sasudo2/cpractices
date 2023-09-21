#include<stdio.h>

int main(){
    char a[50], b[50];
    printf("enter a string: ");
    scanf("%s", &a);
    FILE *fp1, *fp2, *fp3;
    fp1 = fopen("first.txt", "w+");
    fp2 = fopen("second.txt", "w");
    fp3 = fopen("third.txt", "w");
    fprintf(fp1, "%s", a);
    rewind(fp1);
    fscanf(fp1, "%s", &b);
    printf("%s", b);

}