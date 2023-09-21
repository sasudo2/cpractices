#include <stdio.h>

typedef struct student{
    char name[50];
    int roll;
    float mark;
}student;

int main(){
    student stud[3], read[3];
    for(int i = 0; i<3; i++){
        printf("enter the name: ");
        gets(stud[i].name);
        printf("enter the roll: ");
        scanf("%d", &stud[i].roll);
        printf("enter the mark: ");
        scanf("%f", &stud[i].mark);
    }
    FILE *fp;
    fp = fopen("life.dat", "wb");
    fwrite(stud, sizeof(student), 3, fp);
    fclose(fp);
    fp = fopen("life.dat", "rb");
    fread(read,  sizeof(student), 3, fp);
    for(int i = 0; i<3; i++){
        printf("name: %s, roll: %d, marks: %f", read[i].name, read[i].roll,
         read[i].mark);

        }
    fclose(fp);
    return 0;

}