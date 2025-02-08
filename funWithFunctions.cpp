#include <iostream>
using namespace std;

// Function declaration
int getAnIntFromTheUser();
void compareTwoInts(int a, int b);
int sumTwoInts(int a, int b);

int main() {
    int num1 = getAnIntFromTheUser();
    int num2 = getAnIntFromTheUser();
    
    compareTwoInts(num1, num2);

    int sum = sumTwoInts(num1, num2);
    cout << "The sum of the two integers is " << sum << endl;

    return 0;
}

// Function definition
int getAnIntFromTheUser() {
    int value;
    cout << "Enter an integer: ";
    cin >> value;
    // Input validation
    while(cin.fail()) {
        cin.clear(); // clear the error flag
        cin.ignore(INT_MAX, '\n'); // discard invalid input
        cout << "Invalid input. Please enter an integer: ";
        cin >> value;
    }
    return value;
}

// Function definition to compare two integers and display the result
void compareTwoInts(int a, int b) {
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else if (a < b) {
        cout << a << " is less than " << b << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }
}

// Function definition to sum two integers
int sumTwoInts(int a, int b) {
    return a + b;
}