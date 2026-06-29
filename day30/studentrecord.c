#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    int age;
    char course[30];
};

int main() {
    struct Student s[MAX];
    int n = 0, choice, i, roll, found;

    do {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            if (n >= MAX) {
                printf("Student record is full!\n");
                break;
            }

            printf("Enter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf(" %[^\n]", s[n].name);

            printf("Enter Age: ");
            scanf("%d", &s[n].age);

            printf("Enter Course: ");
            scanf(" %[^\n]", s[n].course);

            n++;
            printf("Student record added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No student records found.\n");
            } else {
                printf("\n---------------------------------------------------------\n");
                printf("Roll\tName\t\tAge\tCourse\n");
                printf("---------------------------------------------------------\n");

                for (i = 0; i < n; i++) {
                    printf("%d\t%-15s\t%d\t%s\n",
                           s[i].roll,
                           s[i].name,
                           s[i].age,
                           s[i].course);
                }
            }
            break;

        case 3:
            printf("Enter Roll Number to search: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    printf("\nStudent Found\n");
                    printf("Roll   : %d\n", s[i].roll);
                    printf("Name   : %s\n", s[i].name);
                    printf("Age    : %d\n", s[i].age);
                    printf("Course : %s\n", s[i].course);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student record not found.\n");
            break;

        case 4:
            printf("Enter Roll Number to update: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    printf("Enter New Name: ");
                    scanf(" %[^\n]", s[i].name);

                    printf("Enter New Age: ");
                    scanf("%d", &s[i].age);

                    printf("Enter New Course: ");
                    scanf(" %[^\n]", s[i].course);

                    printf("Student record updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student record not found.\n");
            break;

        case 5:
            printf("Enter Roll Number to delete: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    int j;
                    for (j = i; j < n - 1; j++) {
                        s[j] = s[j + 1];
                    }
                    n--;
                    found = 1;
                    printf("Student record deleted successfully.\n");
                    break;
                }
            }

            if (!found)
                printf("Student record not found.\n");
            break;

        case 6:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}