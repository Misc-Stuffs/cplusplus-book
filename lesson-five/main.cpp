/* Listing 5.1 - Demonstrate Arithmetic Operators on Integers Input by the User
#include <iostream>
using namespace std;

int main() {

    cout << "Enter two integers: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;

    return 0;

}
*/

/* Listing 5.2 - Demonstrate the Difference Between Postfix and Prefix Operators
#include <iostream>
using namespace std;

int  main() {

    int startValue = 101;
    cout << "Start value of integer being operated: " << startValue << endl;

    int postfixIncrement = startValue++;
    cout << "Result of Postfix Increment = " << postfixIncrement << endl;
    cout << "After Postfix Increment, startValue = " << startValue << endl;

    // Reset startValue
    startValue = 101;
    int prefixIncrement = ++startValue;
    cout << "Result of Prefix Increment = " << prefixIncrement << endl;
    cout << "After Prefix Increment, startValue = " << startValue << endl;

    // Reset startValue
    startValue = 101;
    int postfixDecrement = startValue--;
    cout << "Result of Postfix Decrement = " << postfixDecrement << endl;
    cout << "After Postfix Decrement, startValue = " << startValue << endl;

    // Reset startValue
    startValue = 101;
    int prefixDecrement = --startValue;
    cout << "Result of Prefix Decrement = " << prefixDecrement << endl;
    cout << "After Prefix Decrement, startValue = " << startValue << endl;

    return 0;

}
*/

/* Listing 5.3 - Demonstrating Equality and Relational Operators
#include<iostream>
using namespace std;

int main() {

    cout << "Enter two integers: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    bool isEqual = (num1 == num2);
    cout << "Result of equality test: " << isEqual << endl;

    bool isUnequal = (num1 != num2);
    cout << "Result of inequality test: " << isUnequal << endl;

    bool isGreaterThan = (num1 > num2);
    cout << "Result of " << num1 << " > " << num2 << " test: " << isGreaterThan << endl;

    bool isLessThan = (num1 < num2);
    cout << "Result of " << num1 << " < " << num2 << " test: " << isLessThan << endl;

    bool isGreaterThanEquals = (num1 >= num2);
    cout << "Result of " << num1 << " >= " << num2 << " test: " << isGreaterThanEquals << endl;

    bool isLessThanEquals = (num1 <= num2);
    cout << "Result of " << num1 << " <= " << num2 << " test: " << isLessThanEquals << endl;

    return 0;

}
*/

/* Listing 5.4 - Analyzing C++ Logical Operators
#include<iostream>
using namespace std;

int main() {

    cout << "Enter true(1) or false(0) for two operands: " << endl;
    bool op1 = false, op2 = false;

    cin >> op1;
    cin >> op2;

    cout << op1 << " AND " << op2 << " = " << (op1 && op2) << endl;
    cout << op1 << " OR " << op2 << " = " << (op1 || op2) << endl;

    return 0;

}
*/

/* Listing 5.5 - Using Logical NOT (!) and Logical AND (&&) Operators in if statements for Conditional Processing
#include <iostream>
using namespace std;

int main() {

    cout << "Use boolean values (0 / 1) to answer the following questions." << endl;
    cout << "Is it raining? ";
    bool isRaining = false;
    cin >> isRaining;

    cout << "Do you have buses on your streets? ";
    bool busesRunning = false;
    cin >> busesRunning;

    // Conditional statement that uses logical AND and NOT
    if (isRaining && !busesRunning)
        cout << "You cannot go to work." << endl;
    else
        cout << "You can go to work." << endl;

    if (isRaining && busesRunning)
        cout << "Take an umbrella." << endl;

    if ((!isRaining) && busesRunning)
        cout << "Enjoy the sun and have a nice day!" << endl;

    return 0;

}
*/

/* Listing 5.6 - Using Logical NOT and Logical OR Operators to Help You Decide If You Can Buy That Dream Car
#include <iostream>
using namespace std;

int main() {

    cout << "Answer the questions with a 0 or 1" << endl;
    cout << "Is there a discount on your dream car? ";
    bool onDiscount = false;
    cin >> onDiscount;

    cout << "Did you get a fantastic bonus? ";
    bool fantasticBonus = false;
    cin >> fantasticBonus;

    if (onDiscount || fantasticBonus)
        cout << "Congratulations, you can buy that car!" << endl;
    else
        cout << "Sorry, waiting a while is a good idea." << endl;

    if (!onDiscount)
        cout << "Car is not on discount." << endl;

    return 0;

}
*/

// Listing 5.7 - Demonstrating the Use of Bitwise Operators to Perform NOT, AND, OR, AND XOR on Individual Bits in an Integer
#include <iostream>
#include <bitset>
using namespace std;

int main() {

    cout << "Enter a number 0 - 255: ";
    unsigned short inputNum = 0;
    cin >> inputNum;

    bitset<8> inputBits (inputNum);
    cout << inputNum << " in binary is " << inputBits << endl;

    bitset<8> bitwiseNOT = (~inputNum);
    cout << "Logical NOT ~" << endl;
    cout << "~" << inputBits << " = " << bitwiseNOT << endl;

    cout << "Logical AND, & with 00001111" << endl;
    bitset<8> bitwiseAND = (0x0F & inputNum);
    cout << "00001111 & " << inputBits << " = " << bitwiseAND << endl;

    cout << "Logical OR, | with 00001111" << endl;
    bitset<8> bitwiseOR = (0x0F | inputNum);
    cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;

    cout << "Logical XOR, ^ with 00001111" << endl;
    bitset<8> bitwiseXOR = (0x0F ^ inputNum);
    cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR << endl;

    return 0;

}