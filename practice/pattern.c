#include <stdio.h>

int main(){
    char a[5] = "HELLO";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j<=i; j++){
            printf("%c", a[j]);
        }
        printf("\n");
    }
    for(int i = 4; i >= 0; i--){
        for(int j = 0; j<=i; j++){
            printf("%c", a[j]);
        }printf("\n");
    }
}