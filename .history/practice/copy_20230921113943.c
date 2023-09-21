#include <stdio.h>

int main(){
    FILE *fp1, *fp2;
    fp1 = fopen("append.txt", "r");
    fp2 = fopen("copy.txt", "w");
    char ch;
    while((ch =fgetc(fp1))!=EOF){
        fputs(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;

}