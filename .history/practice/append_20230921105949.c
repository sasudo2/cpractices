#include <stdio.h>

int main(){
    FILE *fp;
    char a[30];
    printf("enter any string: ");
    scanf("%[^\n]s", &a);
    fp = fopen("append.txt", "a");
    fprintf(fp, "text: %s\n", a);
    fclose(fp);
    return 0;
}