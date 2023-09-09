#include <stdio.h>
#include <string.h>
#include <conio.h>
typedef struct worker{
    char name[20];
    int age;
    int salary;
} worker;
int main(){
    worker work;
    FILE *fp;
    fp = fopen("workers.txt", (const char * restrict)"a");
    char c;
    while(1){
        printf("name: ");
        gets(work.name);
        printf("age: ");
        scanf("%d", &work.age);
        printf("salary: ");
        scanf("%d", &work.salary);
        fwrite(&work, sizeof(worker), 1, fp);
        try:;
        getch();
        printf("continue[Y/N]: ");
        c = getchar();
        if(c == 'Y' || c == 'y'){
            continue;
        }
        else if(c == 'N' || c == 'n'){
            break;
        }
        else{
            printf("invalid response!!");
            goto try;
        }
    }
    fclose(fp);
    fp = fopen("workers.txt", (const char * restrict)'r');
    if(fp == NULL){
        printf("file could not be opened");
    }
    int p;
    printf("which record: ");
    scanf("%d", &p);
    fseek(fp, p*sizeof(worker), SEEK_SET);
    fread(&work, sizeof(worker), 1, fp);
    fclose(fp);
    return 0;
}