#include <iostream>

int main() {
    char choice; // Declare the choice variable

    do { 
       int num1, num2, num3; // Declare thre interger variables

    // Ask the user to enter three numbers
    std::cout << "Enter three integer numbers, please space them out like this (1 2 3): ";
    std::cin >> num1 >> num2 >> num3;

    int largest; // Variable to store the largest number

    // Nested if statement to find the largest number
    if (num1 >= num2) {
        if (num1 >= num3) {
            largest = num1;
        } else {
            largest = num3;
        }
    } else {
        if (num2 >= num3) {
            largest = num2;
        } else {
            largest = num3;
        }
    }

    // Display the largest number
    std::cout << "The largest number is " << largest << std::endl;

// now the user will be asked if they wish to do it again.
std ::cout << "Would you like to do it again? (y/n): ";
std::cin >> choice;

 } while (choice == 'y' || choice == 'Y'); // if the user enters 'y' or 'Y' the program will run again

    std::cout << "Goodbye!" << std::endl; // if the user enters 'n' the program will end

    return 0;
}