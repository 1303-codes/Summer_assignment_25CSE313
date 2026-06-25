#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].empId);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    
    printf("\n----- Employee Records -----\n");
    printf("ID\tName\t\t\tSalary\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%-20s\t%.2f\n",
               emp[i].empId,
               emp[i].name,
               emp[i].salary);
    }

    return 0;
}