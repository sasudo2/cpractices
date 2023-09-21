#include<stdio.h>

typedef struct employee{
    char empName[50];
    int age;
    long salary;
}employee;

int main(){
    employee employe;
    FILE *fp;
    printf("enter name of employee: ");
    gets(employe.empName);
    fflush(stdin);
    printf("enter the age: ");
    scanf("%d", &employe.age);
    printf("enter the salary: ");
    scanf("%d", %employe.salary)
    fp = fopen("employee.dat", "wb");
    fwrite(&employe, sizeof(employee), 1, fp);
    fclose(fp1);
    return 0;
}