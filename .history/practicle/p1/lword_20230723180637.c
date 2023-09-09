#include <stdio.h>
#include <string.h>

int main(){
    char a[10], b[10], temp[10];
    printf("input a sentence");
    gets(a);
    l = strlen(a);
    for(int i = 0; i<l; i++){
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
            temp = "";
        }
        else{
            temp[i] = a[i]
        }
    }
    printf("%s", b);

}