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

/* Listing 3.3 - Using Global Variables
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
*/

/* Listing 3.4 - Demonstrating Ill-Effects of Signed and Un-Signed Integer Overflow Errors
#include <iostream>
using namespace std;

int main() {

    unsigned short uShortValue = 65535;
    cout << "Incrementing unsigned short " << uShortValue << " gives: ";
    cout << ++uShortValue << endl;

    short signedShort = 32767;
    cout << "Incrementing signed short " << signedShort << " gives: ";
    cout << ++signedShort << endl;

    return 0;

}
*/

// Listing 3.5 - Finding the Size of Standard C++ Variable Types
#include <iostream>
using namespace std;

int main() {

    cout << "Computing the size of some C++ inbuilt variable types" << endl;

    cout << "Size of bool: " << sizeof(bool) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of unsigned short int: " << sizeof(unsigned short) << endl;
    cout << "Size of short int: " << sizeof(short) << endl;
    cout << "Size of unsigned long int: " << sizeof(unsigned long) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of unsigned long long: " << sizeof(unsigned long long) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "The output changes with compiler, hardware and OS." << endl;

    return 0;

}