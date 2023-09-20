#include <stdio.h>

void find(int a[], int n){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(a[i] > a[j]){
                      int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
      
        }
    }
}
int main(){
    int n;
    printf("enter the number of numbers: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++){
        printf("enter: ");
        scanf("%d", &a[i]);
    }
    find(a, n);
    printf("largest = %d, smallest = %d", a[n-1], a[0]);
    return 0;
}
