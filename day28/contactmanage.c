#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact c[100];
    int n = 0, choice, i, found;
    char searchName[50];

    while (1) {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter Name: ");
                scanf(" %[^\n]", c[n].name);

                printf("Enter Phone: ");
                scanf(" %s", c[n].phone);

                printf("Enter Email: ");
                scanf(" %s", c[n].email);

                n++;
                printf("Contact added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No contacts available!\n");
                } else {
                    printf("\n----- Contact List -----\n");
                    for (i = 0; i < n; i++) {
                        printf("%d. %s | %s | %s\n",
                               i + 1,
                               c[i].name,
                               c[i].phone,
                               c[i].email);
                    }
                }
                break;

            case 3:
                printf("Enter name to search: ");
                scanf(" %[^\n]", searchName);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (strcmp(c[i].name, searchName) == 0) {
                        printf("\nContact Found:\n");
                        printf("Name  : %s\n", c[i].name);
                        printf("Phone : %s\n", c[i].phone);
                        printf("Email : %s\n", c[i].email);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Contact not found!\n");
                break;

            case 4:
                printf("Enter name to delete: ");
                scanf(" %[^\n]", searchName);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (strcmp(c[i].name, searchName) == 0) {
                        found = 1;

                        for (int j = i; j < n - 1; j++) {
                            c[j] = c[j + 1];
                        }

                        n--;
                        printf("Contact deleted successfully!\n");
                        break;
                    }
                }

                if (!found)
                    printf("Contact not found!\n");
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