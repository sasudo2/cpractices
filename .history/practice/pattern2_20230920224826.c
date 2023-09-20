#include<stdio.h>

int main(){
    for(int i = 0; i<5; i++){
        for(int l = 0; l<i; l++ ){
            printf(" ");
        }
        for(int j = 1; j <= 5-i; j++)
        {
            printf("%i", j);
        }
        for(int k = 5 - i; k > 0 ; k--){
            printf("%i", k);
        }
        printf("\n");
    }
    return 0;
}