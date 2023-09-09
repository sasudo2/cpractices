#include <stdio.h>
#include <string.h>
int main(){
    char a[100], b[20], temp[20];
    printf("input a integer: ");
    gets(a);
    int i = 0, j = 0;
    do{
        if(a[i] == ' '){
            if(strcmp(b, temp)<0){
                strcpy(b, temp);
            }
            strcpy(temp, "");
            j = 0;
        }
        else if(a[i] == '\0'){
            strcpy(b, temp);
        }
        else{
            temp[j] = a[i];
            j++;
        }
        i++;
    }while(a[i]!='\0');
    // checking for the last word
    if(strcmp(b, temp)<0){
                strcpy(b, temp);
            }
    printf("%s", b);
    return 0;
}