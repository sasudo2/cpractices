#include <stdio.h>
#include <stdlib.h>

typedef struct employee{
    char name[30];
    int age;
    char address[30];
    int salary;
}employee;

int sort(employee *e);

int main(){
    employee *a;
    int n;
    printf("enter the number of employee: ");
    scanf("%d", &n);
    a = (employee *) malloc(sizeof(employee)*n);
    for(int i = 0; i < n; i++){
        printf("name: ");
        gets(a[i].name);
        printf("age: ");
        scanf("%d", a[i].age);
        printf("address: ");
        gets(a[i].address);
        printf("salary: ");
        scanf("%d", a[i].salary);
    }
    free(a);
    return 0;
}