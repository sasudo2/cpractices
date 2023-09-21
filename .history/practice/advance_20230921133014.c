#include <stdio.h>
#include <string.h>

typedef struct employee{
    char name[50];
    int age;
    long salary;
}employee;

int main(){
    employee emp, read;
    FILE *fp;
    fp = fopen("employee.dat", "ab");
    if(fp == NULL){
        printf("file not created: ");
        return 1;
    }
    char conti, search[50];
    do{
        printf("name: ");
        gets(emp.name);
        fflush(stdin);
        printf("age: ");
        scanf("%i", &emp.age);
        fflush(stdin);
        printf('salary: ');
        scanf("%lf", &emp.salary);
        fwrite(&emp, sizeof(employee), 1, fp);
        printf("do you want to add more employee[y/n]: ");
        scanf("%c", &conti);
        fflush(stdin);
    }while(conti == 'y'|| conti == 'Y');
    fflush(stdin);
    fclose(fp);
    fp = fopen("employee.dat", "rb");
    if(fp == NULL){
        printf("file not found");
        return 2;
    }
    printf("employee to search: ");
    gets(search);
    
    while(fread(&read, sizeof(employee), 1, fp) == 0){
        if(strcmp(read.name, search) == 0){
            printf("name: %s, age: %d, salary: %lf", read.name, read.age, read.salary);
            return 0;
        }
    }
    printf("record not found!");
}