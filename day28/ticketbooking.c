#include <stdio.h>
#include <string.h>

struct Ticket {
    int id;
    char name[50];
    int age;
    int booked; 
};

int main() {
    struct Ticket t[100];
    int n, i, choice, searchId, found;

    printf("===== Ticket Booking System =====\n");
    printf("Enter total number of tickets: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        t[i].id = i + 1;
        t[i].booked = 0;
        strcpy(t[i].name, "None");
        t[i].age = 0;
    }

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. View Tickets\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nID\tStatus\t\tName\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t\t%s\n",
                           t[i].id,
                           t[i].booked ? "Booked" : "Available",
                           t[i].name);
                }
                break;

            case 2:
                printf("Enter Ticket ID to book: ");
                scanf("%d", &searchId);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (t[i].id == searchId) {
                        found = 1;

                        if (t[i].booked == 0) {
                            printf("Enter Name: ");
                            scanf(" %[^\n]", t[i].name);

                            printf("Enter Age: ");
                            scanf("%d", &t[i].age);

                            t[i].booked = 1;
                            printf("Ticket booked successfully!\n");
                        } else {
                            printf("Ticket already booked!\n");
                        }
                        break;
                    }
                }

                if (!found)
                    printf("Invalid Ticket ID!\n");
                break;

            case 3:
                printf("Enter Ticket ID to cancel: ");
                scanf("%d", &searchId);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (t[i].id == searchId) {
                        found = 1;

                        if (t[i].booked == 1) {
                            t[i].booked = 0;
                            strcpy(t[i].name, "None");
                            t[i].age = 0;
                            printf("Ticket cancelled successfully!\n");
                        } else {
                            printf("Ticket is not booked!\n");
                        }
                        break;
                    }
                }

                if (!found)
                    printf("Invalid Ticket ID!\n");
                break;

            case 4:
                printf("Thank you for using Ticket Booking System.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}