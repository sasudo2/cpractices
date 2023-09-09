#include <stdio.h>
#include <string.h>
int main(){
    char a[100], b[20], temp[20];
    printf("input a string : ");
    gets(a);
    strcpy(b, "");
    int i = 0, j = 0;
    for(i = 0; i<=strlen(a); i++){
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
    }
    // checking for the last word
    
    printf("%s", b);
    return 0;
}