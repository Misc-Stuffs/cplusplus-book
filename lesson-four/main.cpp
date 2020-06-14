/* Listing 4.1 - Declaring an Array of Integers and Accessing its Elements
#include <iostream>
using namespace std;

int main() {

    int myNumbers [5] = {7, 14, 21, 28, 35};

    cout << "First element at index 0: " << myNumbers [0] << endl;
    cout << "Second element at index 1: " << myNumbers [1] << endl;
    cout << "Third element at index 2: " << myNumbers [2] << endl;
    cout << "Fourth element at index 3: " << myNumbers [3] << endl;
    cout << "Fifth element at index 4: " << myNumbers [4] << endl;

    return 0;

}
*/

// Listing 4.2 - Assigning Values to Elements in an Array
#include <iostream>
using namespace std;
constexpr int Square(int number) { return number * number; }

int main() {

    const int ARRAY_LENGTH = 5;

    // Array of 5 integers, initialized using a const
    int myNumbers [ARRAY_LENGTH] = {5, 10, 0, -10, -5};

    // Using a constexpr for array of 25 integers
    int moreNumbers [Square(ARRAY_LENGTH)] = {};

    cout << "Enter index of the element to be changed: ";
    int elementIndex = 0;
    cin >> elementIndex;

    cout << "Enter new value: ";
    int newValue = 0;
    cin >> newValue;

    myNumbers[elementIndex] = newValue;
    moreNumbers[elementIndex] = newValue;

    cout << "Element " << elementIndex << " in array myNumbers is: ";
    cout << myNumbers[elementIndex] << endl;

    cout << "Element " << elementIndex << " in array moreNumbers is: ";
    cout << moreNumbers[elementIndex] << endl;

    return 0;

}