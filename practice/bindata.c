#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("hello.txt", "wb");
    fputs("Welcome to my collage!", fp);
    fclose(fp);
    fp = fopen("hello.txt", "rb");
    char c[50];
    int i = 0;
    while((c[i] = fgetc(fp))!=EOF){
        i++;
    }
    printf("%s", c);
    return 0;
}