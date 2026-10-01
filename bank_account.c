#include <stdio.h>

struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

int main() {
    struct Account account;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &account.accountNumber);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", account.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &account.balance);

    while (1) {
        printf("\n===== Bank Account Management =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount > 0) {
                account.balance += amount;
                printf("Amount deposited successfully!\n");
            } else {
                printf("Invalid amount.\n");
            }
        }
        else if (choice == 2) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= account.balance) {
                account.balance -= amount;
                printf("Amount withdrawn successfully!\n");
            } else {
                printf("Insufficient balance or invalid amount.\n");
            }
        }
        else if (choice == 3) {
            printf("Current Balance: %.2f\n", account.balance);
        }
        else if (choice == 4) {
            printf("\n--- Account Details ---\n");
            printf("Account Number: %d\n", account.accountNumber);
            printf("Account Holder: %s\n", account.name);
            printf("Balance: %.2f\n", account.balance);
        }
        else if (choice == 5) {
            printf("Thank you for using the Bank Account System!\n");
            break;
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
