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

/* Listing 4.2 - Assigning Values to Elements in an Array
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
*/

/* Listing 4.3 - Accessing Elements in a Multidimensional Array
#include <iostream>
using namespace std;

int main() {

    int threeRowsThreeColumns [3] [3] = {{7, 14, 21}, {28, 35, 42}, {49, 56, 63}};

    cout << "Row 0: " << threeRowsThreeColumns [0] [0] << " ";
    cout << threeRowsThreeColumns [0] [1] << " ";
    cout << threeRowsThreeColumns [0] [2] << " " << endl;

    cout << "Row 1: " << threeRowsThreeColumns [1] [0] << " ";
    cout << threeRowsThreeColumns [1] [1] << " ";
    cout << threeRowsThreeColumns [1] [2] << " " << endl;

    cout << "Row 2: " << threeRowsThreeColumns [2] [0] << " ";
    cout << threeRowsThreeColumns [2] [1] << " ";
    cout << threeRowsThreeColumns [2] [2] << " " << endl;

    return 0;

}
*/

// Listing 4.4 - Creating a Dynamic Array of Integers and Inserting Values Dynamically
#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Dynamic array of type int
    vector<int> dynArray (3);

    dynArray[0] = 7;
    dynArray[1] = 9;
    dynArray[2] = 11;

    cout << "Number of integers in array: " << dynArray.size() << endl;

    cout << "Enter another element to insert into the dynamic array: " << endl;
    int newDynArrayValue = 0;
    cin >> newDynArrayValue;
    dynArray.push_back(newDynArrayValue);

    cout << "Number of integers in array: " << dynArray.size() << endl;
    cout << "Last element in array: ";
    cout << dynArray[dynArray.size() - 1] << endl;

    return 0;

}