#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("hello.txt", "wb");
    fputs("Welcome to my collage!", fp);
    fclose(fp);
    fp = fopen("hello.txt", "rb");
    char c[50] = fgets(fp);
    printf("%s", c);
    return 0;
}