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
    char continue, search[50];
    do{
        printf("name: ");
        gets(emp.name);
        printf("age: ");
        scanf("%i", &emp.age);
        printf("%lf", &emp.salary);
        fwrite(&emp, sizeof(employee), 1, fp);
        printf("do you want to add more employee[y/n]: ");
        scanf("%c", &continue);
        fflush(stdin);
    }while(continue == 'y'|| continue == 'Y');
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