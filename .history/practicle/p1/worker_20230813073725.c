#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct EMPLOYEE {
    char name[100];
    int age;
    char address[100];
    double salary;
};

int compareBySalary(const void *a, const void *b) {
    const struct EMPLOYEE *emp1 = (const struct EMPLOYEE *)a;
    const struct EMPLOYEE *emp2 = (const struct EMPLOYEE *)b;
    return (emp1->salary > emp2->salary) - (emp1->salary < emp2->salary);
}

void sortAndDisplayEmployees(struct EMPLOYEE *employees, int N) {
    qsort(employees, N, sizeof(struct EMPLOYEE), compareBySalary);
    printf("Sorted Employee List:\n");
    for (int i = 0; i < N; ++i) {
        printf("Name: %s, Age: %d, Address: %s, Salary: %.2f\n",
               employees[i].name, employees[i].age, employees[i].address, employees[i].salary);
    }
}

int main() {
    int N;
    printf("Enter the number of employees: ");
    scanf("%d", &N);

    struct EMPLOYEE *employees = (struct EMPLOYEE *)malloc(N * sizeof(struct EMPLOYEE));

    for (int i = 0; i < N; ++i) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Address: ");
        scanf("%s", employees[i].address);
        printf("Salary: ");
        scanf("%lf", &employees[i].salary);
    }

    sortAndDisplayEmployees(employees, N);

    free(employees);

    return 0;
}
