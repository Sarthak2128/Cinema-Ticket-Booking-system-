PVR Cinema Ticket Booking and Food Ordering System
Overview
This is a simple console-based C program that simulates a basic ticket booking and food ordering system for a cinema (PVR). The program allows users to:

Log in securely with a username and password.

Book movie tickets with different seat types (Silver, Gold, Sofa).

Order food items from the cinema food court.

View the availability of seats.

Generate a neatly formatted final bill showing tickets and food costs.

Features
Login Authentication:

User must enter correct username (users) and password (1234) to access the system.

Invalid login terminates the program.

Ticket Booking:

User can choose from three movies: Avengers, Jawan, Animal.

Three seat types with different prices and limited availability:

Silver: Rs. 150 (50 seats available initially)

Gold: Rs. 250 (30 seats available initially)

Sofa: Rs. 400 (10 seats available initially)

User can book multiple seats if available.

Seat availability updates dynamically after each booking.

Food Court:

User can order from a variety of food items, each with fixed prices:

Popcorn - Rs. 50

Cheese Popcorn - Rs. 70

Burger - Rs. 60

Pizza - Rs. 100

Cold Coffee - Rs. 50

Water Bottle - Rs. 25

Sprite - Rs. 30

Redbull - Rs. 130

Thumbs Up - Rs. 30

Lemon Tea - Rs. 30

Multiple food items can be ordered in one session.

The total food bill accumulates accordingly.

Seat Availability Display:

At any point, the user can check the remaining seats for each category.

Final Bill:

On exiting, the program prints a well-formatted bill including:

Total ticket charges

Total food charges

Grand total amount

A thank you message is displayed at the end.

Login:

Enter username: users

Enter password: 1234

Interact with the menu:

Choose options 1 to 4 to book tickets, order food, check seat availability, or exit.

Book Tickets:

Select movie by entering number (1-3).

Select seat type (1-3).

Enter the number of seats.

The program checks availability and updates accordingly.

Order Food:

Select food items by number.

After each item, choose to add more or finish.

View Seat Availability:

See the number of seats left in each category.

Exit:

The program displays the final bill and terminates.

Program Flow
rust
Copy
Edit
Login --> Main Menu -->
   1. Book Tickets --> Movie Selection --> Seat Type --> Number of Seats --> Update Bill & Seats
   2. Food Court --> Order Food Items --> Update Food Bill
   3. Show Seat Availability
   4. Exit --> Display Final Bill & Thank You --> Program Ends
Code Structure Highlights
Uses arrays and variables to track seat availability and bills.

Uses strcmp for simple username and password verification.

Uses loops and conditional statements to process user choices.

Input validation includes seat availability checks and valid menu selections.

Prints a formatted bill using printf format specifiers.

Limitations and Possible Enhancements
Currently supports only one user login credential.

No persistent storage; all data resets when the program exits.

Movie selection does not affect ticket price or availability differently.

Food menu hardcoded; could be improved with arrays or structs.

Could add features like seat selection by number, multiple user accounts, and persistent data storage.

Input validation could be enhanced to handle invalid/non-integer inputs gracefully.

Author
Developed by [Sarthak Jahagirdar]

