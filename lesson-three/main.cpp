/* Listing 3.1 - Using Variables to Store Numbers and the Result of their Multiplication
#include <iostream>
using namespace std;

int main() {

    cout << "This program will help you multiply two numbers together." << endl;

    cout << "Enter the first number: ";
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "Enter the second number: ";
    int secondNumber = 0;
    cin >> secondNumber;

    // Multiply the two numbers, store result in a variable
    int multiplicationResult = firstNumber * secondNumber;

    // Display result
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;

    return 0;

}
*/

/* Listing 3.2 - Demonstrating the Scope of Variables
#include <iostream>
using namespace std;

void MultiplyNumbers() {

    cout << "Enter the first number: ";
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "Enter the second number: ";
    int secondNumber = 0;
    cin >> secondNumber;

    // Multiply the two numbers, store result in a variable
    int multiplicationResult = firstNumber * secondNumber;

    // Display result
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;

}

int main() {

    cout << "This program will help you multiply two numbers together." << endl;

    // Call the function that does all the work
    MultiplyNumbers();

    return 0;

}
*/

// Listing 3.3 - Using Global Variables
#include <iostream>
using namespace std;

// Three global integers
int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

void MultiplyNumbers() {

    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    // Multiply the two, store in a variable
    multiplicationResult = firstNumber * secondNumber;

    // Display result
    cout << "Displaying from MultiplyNumbers(): ";
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;

}

int main() {

    cout << "This program will help you multiply two numbers together." << endl;

    // Call the function that does all the work
    MultiplyNumbers();

    cout << "Displaying from main(): ";
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;

    return 0;

}