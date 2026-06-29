#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book {
    int id;
    char title[50];
    char author[50];
    int available;   // 1 = Available, 0 = Issued
};

int main() {
    struct Book books[MAX];
    int n = 0, choice, id, i, found;

    do {
        printf("\n===== MINI LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            if (n >= MAX) {
                printf("Library is full!\n");
                break;
            }

            printf("Enter Book ID: ");
            scanf("%d", &books[n].id);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", books[n].title);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", books[n].author);

            books[n].available = 1;
            n++;

            printf("Book added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No books available.\n");
            } else {
                printf("\n--------------------------------------------------------------\n");
                printf("ID\tTitle\t\t\tAuthor\t\tStatus\n");
                printf("--------------------------------------------------------------\n");

                for (i = 0; i < n; i++) {
                    printf("%d\t%-20s\t%-15s\t%s\n",
                           books[i].id,
                           books[i].title,
                           books[i].author,
                           books[i].available ? "Available" : "Issued");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (books[i].id == id) {
                    printf("\nBook Found\n");
                    printf("ID      : %d\n", books[i].id);
                    printf("Title   : %s\n", books[i].title);
                    printf("Author  : %s\n", books[i].author);
                    printf("Status  : %s\n",
                           books[i].available ? "Available" : "Issued");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
            break;

        case 4:
            printf("Enter Book ID to issue: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (books[i].id == id) {
                    if (books[i].available) {
                        books[i].available = 0;
                        printf("Book issued successfully.\n");
                    } else {
                        printf("Book is already issued.\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
            break;

        case 5:
            printf("Enter Book ID to return: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (books[i].id == id) {
                    if (!books[i].available) {
                        books[i].available = 1;
                        printf("Book returned successfully.\n");
                    } else {
                        printf("Book is already available.\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
            break;

        case 6:
            printf("Thank you for using the Library System.\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}