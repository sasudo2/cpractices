#include <stdio.h>

int main(){
    for(int i = 0; i<4; i++){
        for(int j = 0; j<3-i; j++){
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
     for(int i = 0; i<3; i++){
        for(int j = i; j>=0; j--){
            printf(" ");
        }
        for(int k = 1; k <= 3-i ; k++)
        {
            printf("%d", k);
        }
        for(int l = 2-i; l > 0; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }
}