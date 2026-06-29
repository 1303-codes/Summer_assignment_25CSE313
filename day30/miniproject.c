#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    int age;
    char course[30];
};

struct Student s[MAX];
int n = 0;

// Function Prototypes
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main() {
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                printf("Thank you!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

// Add Student
void addStudent() {
    if(n >= MAX) {
        printf("Record Full!\n");
        return;
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
    printf("Student Added Successfully.\n");
}

// Display Students
void displayStudents() {
    int i;

    if(n == 0) {
        printf("No Records Found.\n");
        return;
    }

    printf("\n-----------------------------------------------------------\n");
    printf("Roll\tName\t\tAge\tCourse\n");
    printf("-----------------------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%-15s\t%d\t%s\n",
               s[i].roll,
               s[i].name,
               s[i].age,
               s[i].course);
    }
}

// Search Student
void searchStudent() {
    int roll, i;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++) {
        if(s[i].roll == roll) {
            printf("\nRecord Found\n");
            printf("Roll   : %d\n", s[i].roll);
            printf("Name   : %s\n", s[i].name);
            printf("Age    : %d\n", s[i].age);
            printf("Course : %s\n", s[i].course);
            return;
        }
    }

    printf("Student Not Found.\n");
}

// Update Student
void updateStudent() {
    int roll, i;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++) {
        if(s[i].roll == roll) {

            printf("Enter New Name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter New Age: ");
            scanf("%d", &s[i].age);

            printf("Enter New Course: ");
            scanf(" %[^\n]", s[i].course);

            printf("Record Updated Successfully.\n");
            return;
        }
    }

    printf("Student Not Found.\n");
}

// Delete Student
void deleteStudent() {
    int roll, i, j;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++) {
        if(s[i].roll == roll) {

            for(j = i; j < n - 1; j++) {
                s[j] = s[j + 1];
            }

            n--;
            printf("Record Deleted Successfully.\n");
            return;
        }
    }

    printf("Student Not Found.\n");
}