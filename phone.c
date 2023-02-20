#include<stdio.h>
#include<stdlib.h>

int main() {
    char phone_number[11];  // 10 digits phone number + null character
    int choice;

    while(1) {
        printf("Welcome to the phone system\n");
        printf("Enter 1 to make a call\n");
        printf("Enter 2 to send a message\n");
        printf("Enter 3 to turn off the phone\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter the phone number you want to call: ");
                scanf("%s", phone_number);
                printf("Calling %s...\n", phone_number);
                break;

            case 2:
                printf("Enter the phone number you want to message: ");
                scanf("%s", phone_number);
                printf("Enter the message: ");
                char message[100];
                scanf("%s", message);
                printf("Sending message '%s' to %s...\n", message, phone_number);
                break;

            case 3:
                printf("Turning off the phone...\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again\n");
                break;
        }
    }

    return 0;
}
