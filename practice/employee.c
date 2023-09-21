#include<stdio.h>

typedef struct employee{
    char empName[50];
    int age;
    long salary;
}employee;

int main(){
    employee employe, read;
    FILE *fp;
    printf("enter name of employee: ");
    gets(employe.empName);
    fflush(stdin);
    printf("enter the age: ");
    scanf("%d", &employe.age);
    printf("enter the salary: ");
    scanf("%ld", &employe.salary);
    fp = fopen("employee.dat", "wb");
    fwrite(&employe, sizeof(employee), 1, fp);
    fclose(fp);
    fp = fopen("employee.dat", "rb");
    fread(&read, sizeof(employee), 1, fp);
    printf("%s, %i, %ld",read.empName, read.age, read.salary);
    fclose(fp);
    return 0;
}