#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct account {
    char name[50];
    int acc_no;
    float balance;
};

void deposit(struct account *acc, float amount) {
    acc->balance += amount;
    printf("Amount deposited successfully. New balance is: %.2f\n", acc->balance);
}

void withdraw(struct account *acc, float amount) {
    if (acc->balance >= amount) {
        acc->balance -= amount;
        printf("Amount withdrawn successfully. New balance is: %.2f\n", acc->balance);
    } else {
        printf("Insufficient balance. Withdrawal failed.\n");
    }
}

int main() {
    struct account acc1;
    strcpy(acc1.name, "John Doe");
    acc1.acc_no = 123456;
    acc1.balance = 1000.00;

    printf("Welcome to our banking system\n");
    printf("Account Holder Name: %s\n", acc1.name);
    printf("Account Number: %d\n", acc1.acc_no);
    printf("Balance: %.2f\n\n", acc1.balance);

    float amount;
    int choice;

    while (1) {
        printf("Enter 1 to deposit money\n");
        printf("Enter 2 to withdraw money\n");
        printf("Enter 3 to exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(&acc1, amount);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&acc1, amount);
                break;

            case 3:
                printf("Thank you for using our banking system\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again\n");
                break;
        }
    }

    return 0;
}
