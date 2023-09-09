#include <stdio.h>

int main(){
    int n1, n2, a, b;
    printf("input the range: ");
    scanf("%d%d", &n1, &n2);
    for(int i = n1 + 1; i < n2; i++){
        a = i;
        int s = 0, c;
        while(a != 0){
            b = a%10;
            c = 1;
            for(int j = 1; j<=b; j++){
                c = c*j;
            }
            s = s + c;
            a = a/10;
        }
        if(i == s){
            printf("%d ", i);
        }
    }
}