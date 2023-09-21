#include <stdio.h>
#include <string.h>

typedef struct employee{
    char name[50];
    int age;
    int salary;
}employee;

int main(){
    employee emp, read;
    FILE *fp;
    fp = fopen("employee.dat", "wb");
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
        printf("salary: ");
        scanf("%i", &emp.salary);
        fwrite(&emp, sizeof(employee), 1, fp);
        fflush(stdin);
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
    
    // while(fread(&read, sizeof(employee), 1, fp) == 1){
        while(!feof(fp)){
            fread(&read, sizeof(employee), 1, fp);
        if(strcmp(read.name, search) == 0){
            printf("name: %s, age: %d, salary: %lf", read.name, read.age, read.salary);
            return 0;
        }
    }
    //printf("record not found!");
    return 0;
}