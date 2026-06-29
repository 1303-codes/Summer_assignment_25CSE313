#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], copy[100];
    int choice, result;

    do {
        printf("\n===== MENU DRIVEN STRING OPERATIONS =====\n");
        printf("1. Input String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Copy String\n");
        printf("5. Concatenate Strings\n");
        printf("6. Compare Strings\n");
        printf("7. Reverse String\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();   // Clear newline from input buffer

        switch (choice) {

        case 1:
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0'; // Remove newline
            break;

        case 2:
            printf("String: %s\n", str1);
            break;

        case 3:
            printf("Length of the string = %lu\n", strlen(str1));
            break;

        case 4:
            strcpy(copy, str1);
            printf("Copied String: %s\n", copy);
            break;

        case 5:
            printf("Enter another string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            strcat(str1, str2);
            printf("Concatenated String: %s\n", str1);
            break;

        case 6:
            printf("Enter another string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            result = strcmp(str1, str2);

            if (result == 0)
                printf("Both strings are equal.\n");
            else
                printf("Strings are not equal.\n");
            break;

        case 7:
            strcpy(copy, str1);
            strrev(copy);   // Works in Turbo C/CodeBlocks (not standard C)
            printf("Reversed String: %s\n", copy);
            break;

        case 8:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 8);

    return 0;
}