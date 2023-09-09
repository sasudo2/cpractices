#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2, a, b, s;
    printf("input the range: ");
    scanf("%d%d", &n1, &n2);
    for(int i = n1 + 1; i < n2; i++){
        s = 0;
        a = i/2+1;
        for(int j = 1; j <= a; j++)
        {
            b = i%j;
            if(b == 0){
                s = s + j;
            }
        }
        if(s == i){
            printf("%d\n", i);
        }

    }
}