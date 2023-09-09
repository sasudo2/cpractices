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
    char name[30], address[30];
    int n, age, salary;
    printf("enter the number of employee: ");
    scanf("%d", &n);
    a = (employee *) malloc(sizeof(employee)*n);
    for(int i = 0; i < n; i++){
        printf("name: ");
        gets(name);
        printf("age: ");
        scanf("%d", &age);
        printf("address: ");
        gets(address);
        printf("salary: ");
        scanf("%d", &salary);
    }
    free(a);
    return 0;
}