#include <stdio.h>
#include <string.h>
int main(){
    char a[100], b[20], temp[20];
    printf("input a string : ");
    gets(a);
    strcpy(b, "\0");
    int i = 0, j = 0;
    for(i = 0; i<=strlen(a); i++){
        if(a[i] == ' ' || a[i] == '\0'){
            temp[j] = '\0';
            if(strlen(b)< strlen(temp)){
                strcpy(b, temp);
            }
            strcpy(temp, "\0");
            j = 0;
        }
        else{
            temp[j] = a[i];
            j++;
        }
    }
    // checking for the last word
    
    printf("%s", b);
    return 0;
}