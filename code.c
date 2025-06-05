#include <stdio.h>
#include <string.h>

int main() {
    char user[20], pass[20];
    int choice;
    int silver = 50, gold = 30, sofa = 10;
    int ticketBill = 0, foodBill = 0;

    // Login
    printf("====== Welcome to PVR Cinema ======\n");
    printf("Enter username: ");
    scanf("%s", user);
    printf("Enter password: ");
    scanf("%s", pass);

    if (strcmp(user,"users") != 0 || strcmp(pass, "1234") != 0) {
        printf("Wrong login. Please try again later.\n");
        return 0;
    }

    printf("Login Successful!\n");

    while (1) {
        printf("\nMain Menu:\n");
        printf("1. Book Tickets\n");
        printf("2. Food Court\n");
        printf("3. Show Seat Availability\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int movie, seatType, seats, cost = 0;

            printf("\nMovies:\n");
            printf("1. Avengers\n");
            printf("2. Jawan\n");
            printf("3. Animal\n");
            printf("Choose movie: ");
            scanf("%d", &movie);

            printf("Seat Types:\n");
            printf("1. Silver - Rs.150\n");
            printf("2. Gold - Rs.250\n");
            printf("3. Sofa - Rs.400\n");
            printf("Enter seat type: ");
            scanf("%d", &seatType);

            printf("Enter number of seats: ");
            scanf("%d", &seats);

            if (seatType == 1) {
                if (seats <= silver) {
                    cost = seats * 150;
                    silver -= seats;
                } else {
                    printf("Not enough Silver seats.\n");
                    continue;
                }
            } else if (seatType == 2) {
                if (seats <= gold) {
                    cost = seats * 250;
                    gold -= seats;
                } else {
                    printf("Not enough Gold seats.\n");
                    continue;
                }
            } else if (seatType == 3) {
                if (seats <= sofa) {
                    cost = seats * 400;
                    sofa -= seats;
                } else {
                    printf("Not enough Sofa seats.\n");
                    continue;
                }
            } else {
                printf("Invalid seat type.\n");
                continue;
            }

            ticketBill += cost;

            printf("Tickets Booked!\n");
            printf("Ticket Bill: Rs. %d\n", ticketBill);

        } else if (choice == 2) {
            int foodChoice, more;

            do {
                printf("\nFood Menu:\n");
                printf("1. Popcorn - Rs.50\n");
                printf("2. Cheese Popcorn - Rs.70\n");
                printf("3. Burger - Rs.60\n");
                printf("4. Pizza - Rs.100\n");
                printf("5. Cold Coffee - Rs.50\n");
                printf("6. Water Bottle - Rs.25\n");
                printf("7. Sprite - Rs.30\n");
                printf("8. Redbull - Rs.130\n");
                printf("9. Thumbs Up - Rs.30\n");
                printf("10. Lemon Tea - Rs.30\n");
                printf("Choose item: ");
                scanf("%d", &foodChoice);

                if (foodChoice == 1) foodBill += 50;
                else if (foodChoice == 2) foodBill += 70;
                else if (foodChoice == 3) foodBill += 60;
                else if (foodChoice == 4) foodBill += 100;
                else if (foodChoice == 5) foodBill += 50;
                else if (foodChoice == 6) foodBill += 25;
                else if (foodChoice == 7) foodBill += 30;
                else if (foodChoice == 8) foodBill += 130;
                else if (foodChoice == 9) foodBill += 30;
                else if (foodChoice == 10) foodBill += 30;
                else printf("Invalid item.\n");

                printf("Add more? (1=Yes, 0=No): ");
                scanf("%d", &more);
            } while (more == 1);

            printf("Food Bill: Rs. %d\n", foodBill);

        } else if (choice == 3) {
            printf("\nSeats Available:\n");
            printf("Silver: %d\n", silver);
            printf("Gold: %d\n", gold);
            printf("Sofa: %d\n", sofa);

        } else if (choice == 4) {
            printf("\n==============================\n");
            printf("          FINAL BILL           \n");
            printf("==============================\n");
            printf("%-15s : Rs. %7d\n", "Tickets", ticketBill);
            printf("%-15s : Rs. %7d\n", "Food", foodBill);
            printf("------------------------------\n");
            printf("%-15s : Rs. %7d\n", "TOTAL", ticketBill + foodBill);
            printf("==============================\n");
            printf("     Thanks for visiting!     \n");
            printf("==============================\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
