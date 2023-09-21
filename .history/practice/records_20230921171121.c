#include <stdio.h>

typedef struct student{
    char name[50];
    int roll;
    float mark;
}student;

int main(){

    student stud;
    FILE *fp1, *fp2, *fp3;
    fp1 = fopen("records.txt", "wb");
    char conti;
    dp(
        printf("enter name: ");
        gets(stud.name);
        fflush(stdin);
        printf("enter roll: ");
        scanf("%i", &stud.roll);
        fflush(stdin);
        printf("enter marks: ");
        scanf("%f", &stud.marks);
        fflush(stdin);
        printf("do you want to add more students[y/n]: ");
        getc(conti);
        fwrite(&stud, sizeof(student), 1, fp1);
        fflush(stdin);

    )while(conti == 'y'|| conti == 'Y');

    fclose(fp1);
    fp2 = fopen("recordse.txt", "wb");
    fp3 = fopen("recordso.txt", "wb");
    fp1 = fopen("records.txt", "rb");

    while(fread(&stud, sizeof(student), 1, fp1) == 1){
        if(stud.roll%2 == 0){
            fwrite(&stud, sizeof(student), 1, fp2);
        }
        else{
            fwrite(&stud, sizeof(student), 1, fp3);
        }
    }

    return 0;

}