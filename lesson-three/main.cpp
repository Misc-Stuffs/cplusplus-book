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

/* Listing 3.5 - Finding the Size of Standard C++ Variable Types
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
*/

/* Listing 3.6 - Using the keyword "auto" and relying on the compilers type-inference capabilities
#include <iostream>
using namespace std;

int main() {

    auto coinFlippedHeads = true;
    auto largeNumber = 2'500'000'000'000;

    cout << "coinFlippedHeads = " << coinFlippedHeads;
    cout << " , sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;

    cout << "largeNumber = " << largeNumber;
    cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << endl;

    return 0;

}
*/

/* Keyword - typedef (type definition)
#include <iostream>
using namespace std;

int main() {

    typedef unsigned int STRICTLY_POSITIVE_INTEGER;
    STRICTLY_POSITIVE_INTEGER numEggsInBasket = 5679;

    cout << numEggsInBasket << endl;

    return 0;

}
*/

/* Listing 3.7 - Declaring a constant 'pi'
#include <iostream>
using namespace std;

int main() {

    const double pi = 22.0 / 7;

    cout << "The value of constant pi is: " << pi << endl;

    //Uncomment to view compile failure
    //pi = 345;

    return 0;

}
*/

/* Listing 3.8 - Demonstrating "constexpr" to Calculate Pi
#include <iostream>
constexpr double GetPi() { return 22.0 / 7; }
constexpr double TwicePi() { return 2 * GetPi(); }
using namespace std;

int main() {

    const double pi = 22.0 / 7;

    cout << "constant pi contains value " << pi << endl;
    cout << "constexpr GetPi() returns value " << GetPi() << endl;
    cout << "constexpr TwicePi() returns value " << TwicePi() << endl;

    return 0;

}
*/

/* Listing 3.9 - Using Enumerated Values to Indicate Cardinal Wind Directions
#include <iostream>
using namespace std;

enum CardinalDirections {

    North = 25,
    South,
    East,
    West

};

int main() {

    cout << "Displaying directions and their symbolic values" << endl;
    cout << "North: " << North << endl;
    cout << "South: " << South << endl;
    cout << "East: " << East << endl;
    cout << "West: " << West << endl;

    CardinalDirections windDirection = South;
    cout << "Variable windDirection = " << windDirection << endl;

    return 0;

}
*/

/* Exercise 2
#include <iostream>
using namespace std;

int main() {

    unsigned int positiveNumber = 100;
    int regularNumber = -150;
    long int longNumber = 150'000'000;

    cout << "unsigned int positiveNumber sizeof: " << sizeof(positiveNumber) << endl;
    cout << "int regularNumber sizeof: " << sizeof(regularNumber) << endl;
    cout << "long int longNumber sizeof: " << sizeof(longNumber) << endl;

    return 0;

}
*/

// Exercise 3
#include <iostream>
using namespace std;
constexpr double Pi() { return 22.0 / 7; }
double circleRadius, circleArea, circleCircumference = 0.0;

void calculateAreaAndCircumference() {

    circleArea = Pi() * circleRadius * circleRadius;
    circleCircumference = 2 * Pi() * circleRadius;

}

int main() {

    cout << "Enter circle radius: ";
    cin >> circleRadius;

    calculateAreaAndCircumference();

    cout << "Circle Radius: " << circleRadius << endl;
    cout << "Circle Circumference: " << circleCircumference << endl;
    cout << "Circle Area: " << circleArea << endl;

    return 0;

}