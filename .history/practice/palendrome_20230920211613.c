#include <stdio.h>

int main(){
    char a[10], b[10];
    scanf("%s", &a);
    int i = 0, n = 0;
    while(a[i]!='\0'){
        n++;
    }
    for(i = 0; i<=n; i++){
        if(a[i]!= a[n-i])
        {
            printf("not");
            return 0;
        }
    }
    print("yes");
    
}