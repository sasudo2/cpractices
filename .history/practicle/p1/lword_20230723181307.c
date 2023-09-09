#include <stdio.h>
#include <string.h>

int main(){
    char a[1], b[1], temp[1];
    int i;
    printf("input a sentence");
    gets(a);
    for(i = 0; i<(int)strlen(a); i++){
        if(a[i] == '\0'){
            if(strlen(b) < strlen(temp)){
                strcpy(b, temp);
            }
            break;
        }
        else if(a[i] == ' '){
            if(strlen(b) < strlen(temp)){
                strcpy(b, temp);
            }
            strcpy(temp, "");
        }
        else{
            temp[i] = a[i];
        }
    }
    printf("%s", b);

}
