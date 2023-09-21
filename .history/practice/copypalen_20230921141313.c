#include<stdio.h>

int main(){
    char a[50], b[50], c[0];
    printf("enter a string: ");
    scanf("%s", &a);
    FILE *fp1, *fp2, *fp3;
    fp1 = fopen("first.txt", "w+");
    fp2 = fopen("second.txt", "w");
    fp3 = fopen("third.txt", "w");
    fprintf(fp1, "%s", a);
    rewind(fp1);
    fscanf(fp1, "%s", &b);
    int i = 0;
    while(b[i]!='\0'){
        i++;
    }
    for(int j = 0; j<i; j++)
    {
        if(b[j]!=b[i-j-1]){
            fprintf(fp2, "%s", b);
            return 0;
        }
    }
    fprintf(fp3, "%s", b);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;

}