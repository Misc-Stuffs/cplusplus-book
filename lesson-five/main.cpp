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

// Listing 5.3 - Demonstrating Equality and Relational Operators
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