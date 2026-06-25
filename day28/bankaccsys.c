#include <stdio.h>
#include <string.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc;
    int choice;
    float amount;

    printf("===== Bank Account System =====\n");

    
    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", acc.name);

    acc.balance = 0;

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Current Balance: ₹%.2f\n", acc.balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    acc.balance += amount;
                    printf("₹%.2f deposited successfully.\n", amount);
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Invalid amount!\n");
                } else if (amount > acc.balance) {
                    printf("Insufficient balance!\n");
                } else {
                    acc.balance -= amount;
                    printf("₹%.2f withdrawn successfully.\n", amount);
                }
                break;

            case 4:
                printf("\n----- Account Details -----\n");
                printf("Account Number : %d\n", acc.accNo);
                printf("Holder Name    : %s\n", acc.name);
                printf("Balance        : ₹%.2f\n", acc.balance);
                break;

            case 5:
                printf("Thank you for using the banking system.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}