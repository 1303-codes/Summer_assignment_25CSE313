#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int issued; 
};

int main() {
    struct Book lib[100];
    int n, i, choice, searchId, found;

    printf("===== Library Management System =====\n");
    printf("Enter number of books: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &lib[i].id);

        printf("Title: ");
        scanf(" %[^\n]", lib[i].title);

        printf("Author: ");
        scanf(" %[^\n]", lib[i].author);

        lib[i].issued = 0;
    }

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Display Books\n");
        printf("2. Search Book by ID\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\n----- Book List -----\n");
                printf("ID\tTitle\t\tAuthor\t\tStatus\n");

                for (i = 0; i < n; i++) {
                    printf("%d\t%-15s\t%-15s\t%s\n",
                           lib[i].id,
                           lib[i].title,
                           lib[i].author,
                           lib[i].issued ? "Issued" : "Available");
                }
                break;

            case 2:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (lib[i].id == searchId) {
                        printf("\nBook Found!\n");
                        printf("Title  : %s\n", lib[i].title);
                        printf("Author : %s\n", lib[i].author);
                        printf("Status : %s\n", lib[i].issued ? "Issued" : "Available");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found!\n");
                break;

            case 3:
                printf("Enter Book ID to issue: ");
                scanf("%d", &searchId);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (lib[i].id == searchId) {
                        found = 1;
                        if (lib[i].issued == 0) {
                            lib[i].issued = 1;
                            printf("Book issued successfully.\n");
                        } else {
                            printf("Book already issued.\n");
                        }
                        break;
                    }
                }

                if (!found)
                    printf("Book not found!\n");
                break;

            case 4:
                printf("Enter Book ID to return: ");
                scanf("%d", &searchId);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (lib[i].id == searchId) {
                        found = 1;
                        if (lib[i].issued == 1) {
                            lib[i].issued = 0;
                            printf("Book returned successfully.\n");
                        } else {
                            printf("Book was not issued.\n");
                        }
                        break;
                    }
                }

                if (!found)
                    printf("Book not found!\n");
                break;

            case 5:
                printf("Exiting system...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}