#include <stdio.h>

int main(){
    for(int i = 0; i<=4; i++){
        for(int j = 0; j<4-i; j++){
            printf(" ");
        }
        for(int k = 1; k <= i+1 ; k++)
        {
            printf("%d", k);
        }
        for(int l = i; l > 0; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }
}