/* Listing 2.1-2.3
// Preprocessor directive that includes header iostream
#include <iostream>

// Start of your program: function block main()
int main() {

    // Tell the compiler what namespace to search in
    // using namespace std;

    // Another use of 'using' - only includes the artifacts you want
    using std::cout;
    using std::endl;

    // Write to the screen
    cout << "Hello World!" << endl;

    // Return a value to the OS
    return 0;
}
*/

/* Listing 2.4
#include <iostream>
using namespace std;

// Declare a function
int DemoConsoleOutput();

int main() {

    // Call i.e. invoke the function
    DemoConsoleOutput();

    return 0;

}

// Define i.e. implement the previously declared function
int DemoConsoleOutput() {

    cout << "This is a simple string literal" << endl;
    cout << "Writing the number five: " << 5 << endl;
    cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
    cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
    cout << "Pi is 22 / 7 = " << 22.0 / 7 << endl;

    return 0;

}
*/

/* Listing 2.5
#include <iostream>
using namespace std;

// Function declaration and definition
int DemoConsoleOutput() {

    cout << "This is a simple string literal" << endl;
    cout << "Writing the number five: " << 5 << endl;
    cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
    cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
    cout << "Pi is 22 / 7 = " << 22.0 / 7 << endl;

    return 0;

}

int main() {

    //Function call with return used to exit
    return DemoConsoleOutput();

}
*/

/* Listing 2.6
#include <iostream>
#include <string>
using namespace std;

int main() {

    // Declare a variable to store an integer
    int inputNumber;

    cout << "Enter an integer: ";

    // Store integer given user input
    cin >> inputNumber;

    // The same with text i.e. string data
    cout << "Enter your name: ";
    string inputName;
    cin >> inputName;

    cout << inputName << " entered " << inputNumber << endl;

    return 0;

}
*/

/* Exercise 1 - Find and fix the bugs
#include <iostream>

void main() {
    std::Cout << Is there a bug here?";
}
*/

/* Exercise 1 - Solution
#include <iostream>

int main() {

    std::cout << "Is there a bug here?";

    return 0;

}
*/

// Exercise 2 - Derive Listing 2.4 to use subtraction and multiplication
#include <iostream>
using namespace std;

// Declare a function
int DemoConsoleOutput();

int main() {

    // Call i.e. invoke the function
    DemoConsoleOutput();

    return 0;

}

// Define i.e. implement the previously declared function
int DemoConsoleOutput() {

    cout << "10 - 5 = " << 10 - 5 << endl;
    cout << "10 * 5 = " << 10 * 5 << endl;

    return 0;

}