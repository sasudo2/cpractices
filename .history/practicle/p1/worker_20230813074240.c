#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    int age;
    char address[100];
    double salary;
} EMPLOYEE;

void bubbleSort(EMPLOYEE *employees, int N) {
    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            if (employees[j].salary > employees[j + 1].salary) {
                // Swap employees[j] and employees[j + 1]
                EMPLOYEE temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
}

void displayEmployees(EMPLOYEE *employees, int N) {
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

    EMPLOYEE *employees = (EMPLOYEE *)malloc(N * sizeof(EMPLOYEE));

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

    bubbleSort(employees, N);
    displayEmployees(employees, N);

    free(employees);

    return 0;
}
