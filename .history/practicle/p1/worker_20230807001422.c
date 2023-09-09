#include <stdio.h>
#include <string.h>
typedef struct worker{
    char name[20];
    int age;
    int salary;
} worker;
int main(){
    worker work;
    FILE *fp;
    fp = fopen("workers.txt", 'a+');
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
        printf("continue[Y/N]: ");
        getch(c);
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
    int p;
    printf("which record: ");
    scanf("%d", &p);
    fseek(fp, p*sizeof(worker), SEEK_SET);
    fread(&work, sizeof(worker), 1, fp);
    fclose(fp);
    return 0;
}