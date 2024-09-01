#include <iostream>

using namespace std;

void showMenu() {
    cout << "Simple Calculator" << endl;  // Display the title
    cout << "1. Addition" << endl;        // Option for addition
    cout << "2. Subtraction" << endl;     // Option for subtraction
    cout << "3. Multiplication" << endl;  // Option for multiplication
    cout << "4. Division" << endl;        // Option for division
    cout << "5. Exit" << endl;            // Option to exit the program
    cout << "Choose an option: ";         // Prompt user to choose an option
}

int main() {
    int choice;             // Variable to store the user's menu choice
    double num1, num2;      // Variables to store the two numbers for calculation
    double result;          // Variable to store the result of the calculation

    do {
        showMenu();         // Display the menu options to the user
        cin >> choice;      // Read the user's choice

        // If the user selects a valid operation (1-4), ask for two numbers
        if (choice >= 1 && choice <= 4) {
            cout << "Enter the first number: ";  // Prompt to enter the first number
            cin >> num1;                         // Read the first number
            cout << "Enter the second number: "; // Prompt to enter the second number
            cin >> num2;                         // Read the second number
        }

        // Perform the selected operation based on the user's choice
        switch(choice) {
            case 1:
                result = num1 + num2;  // Perform addition
                cout << "\033[1;34m" << "Result: " << result << "\033[0m" << endl;  // Display the result in blue
                break;
            case 2:
                result = num1 - num2;  // Perform subtraction
                cout << "\033[1;34m" << "Result: " << result << "\033[0m" << endl;  // Display the result in blue
                break;
            case 3:
                result = num1 * num2;  // Perform multiplication
                cout << "\033[1;34m" << "Result: " << result << "\033[0m" << endl;  // Display the result in blue
                break;
            case 4:
                // Check for division by zero
                if (num2 != 0) {
                    result = num1 / num2;  // Perform division
                    cout << "\033[1;34m" << "Result: " << result << "\033[0m" << endl;  // Display the result in blue
                } else {
                    cout << "\033[1;31m" << "Error! Division by zero." << "\033[0m" << endl;  // Display error in red
                }
                break;
            case 5:
                cout << "Exiting the program." << endl;  // Exit message
                break;
            default:
                cout << "\033[1;31m" << "Invalid option! Please choose again." << "\033[0m" << endl;  // Display invalid option error in red
        }
    } while (choice != 5);  // Repeat until the user chooses to exit

    return 0;  // Indicate that the program ended successfully
}
