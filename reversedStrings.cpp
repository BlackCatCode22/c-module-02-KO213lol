#include <iostream>
#include <string>
#include <algorithm> // For std::reverse

int main() {
    std::string input;

    // Prompt user for input
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Reverse the string
    std::reverse(input.begin(), input.end());

    // Output the reversed string
    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}