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

/* Listing 4.4 - Creating a Dynamic Array of Integers and Inserting Values Dynamically
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
*/

/* Listing 4.5 - Analyzing the Null-Terminator in a C-Style String
#include <iostream>
using namespace std;

int main() {

    char sayMyName[] = {'B', 'e', 'n', 'j', 'a', 'm', 'i', 'n', ' ', 'W', 'o', 'r', 't', 'h', 'i', 'n', 'g', 't', 'o', 'n', '\0'};

    cout << sayMyName << endl;
    cout << "Size of array: " << sizeof(sayMyName) << endl;

    cout << "Replacing space with null" << endl;
    sayMyName[8] = '\0';

    cout << sayMyName << endl;
    cout << "Size of new array: " << sizeof(sayMyName) << endl;

    return 0;

}
*/

/* Listing 4.6 - A Risky Application Using C-Style Strings and User Input
#include <iostream>
#include <string.h>

using namespace std;

int main() {

    cout << "Enter a word NO LONGER than 20 characters: " << endl;

    char userInput [21] = {'\0'};
    cin >> userInput;

    cout << "Length of your input was: " << strlen(userInput) << endl;

    return 0;

}
*/

/* Listing 4.7 - Using std::string to Initialize, Store User Input, Copy, Concatenate, and Determine
/* the Length of a String
#include <iostream>
#include <string>

using namespace std;

int main() {

    string greetString ("Hello std::string!");
    cout << greetString << endl;

    cout << "Enter a line of text: " << endl;
    string firstLine;
    getline(cin, firstLine);

    cout << "Enter another: " << endl;
    string secondLine;
    getline(cin, secondLine);

    cout << "Result of concatenation: " << endl;
    string concatString = firstLine + " " + secondLine;
    cout << concatString << endl;

    cout << "Copy of concatenated string: " << endl;
    string aCopy;
    aCopy = concatString;
    cout << aCopy << endl;

    cout << "Length of concatenated string: " << concatString.length() << endl;

    return 0;

}
*/

// Exercise 1 - Chessboard
#include <iostream>

using namespace std;

int main() {

    enum ChessPiece {

        Empty = 0,
        Pawn,
        Rook,
        Knight,
        Bishop,
        Queen,
        King

    };

    ChessPiece chessboard [8] [8] = {};

    // Initializing Row 0 of the chessboard (Top, black pieces)
    chessboard [0] [0] = chessboard [0] [7] = Rook;
    chessboard [0] [1] = chessboard [0] [6] = Knight;
    chessboard [0] [2] = chessboard [0] [5] = Bishop;
    chessboard [0] [3] = Queen;
    chessboard [0] [4] = King;

    // Initializing Row 1 of the chessboard
    chessboard [1] [0] = chessboard [1] [1] = chessboard [1] [2] = chessboard [1] [3] = chessboard [1] [4] = chessboard [1] [5] = chessboard [1] [6] = chessboard [1] [7] = Pawn;

    // Initializing Row 2 of the chessboard
    chessboard [2] [0] = chessboard [2] [1] = chessboard [2] [2] = chessboard [2] [3] = chessboard [2] [4] = chessboard [2] [5] = chessboard [2] [6] = chessboard [2] [7] = Empty;

    // Initializing Row 3 of the chessboard
    chessboard [3] [0] = chessboard [3] [1] = chessboard [3] [2] = chessboard [3] [3] = chessboard [3] [4] = chessboard [3] [5] = chessboard [3] [6] = chessboard [3] [7] = Empty;

    // Initializing Row 4 of the chessboard
    chessboard [4] [0] = chessboard [4] [1] = chessboard [4] [2] = chessboard [4] [3] = chessboard [4] [4] = chessboard [4] [5] = chessboard [4] [6] = chessboard [4] [7] = Empty;

    // Initializing Row 5 of the chessboard
    chessboard [5] [0] = chessboard [5] [1] = chessboard [5] [2] = chessboard [5] [3] = chessboard [5] [4] = chessboard [5] [5] = chessboard [5] [6] = chessboard [5] [7] = Empty;

    // Initializing Row 6 of the chessboard (Bottom, white pieces)
    chessboard [6] [0] = chessboard [6] [1] = chessboard [6] [2] = chessboard [6] [3] = chessboard [6] [4] = chessboard [6] [5] = chessboard [6] [6] = chessboard [6] [7] = Pawn;

    // Initializing Row 7 of the chessboard
    chessboard [7] [0] = chessboard [7] [7] = Rook;
    chessboard [7] [1] = chessboard [7] [6] = Knight;
    chessboard [7] [2] = chessboard [7] [5] = Bishop;
    chessboard [7] [3] = Queen;
    chessboard [7] [4] = King;

    cout << "What chess piece is on Row 0 Column 4: " << endl;
    cout << chessboard [0] [4] << endl;

    return 0;

}