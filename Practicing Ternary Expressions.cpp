#include <iostream>
using namespace std;

int main() {
    int number1, number2;

    // Ask the user to enter the numbers
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;



    // Task 1: Convert this if-else block to a ternary expression
    if (number1 > number2) {
        cout << "Number1 is greater" << endl;
    }
    else {
        cout << "Number2 is greater or equal" << endl;
    }



    // Task 2: Convert this if-else block to a ternary expression 
    if (number1 > 0 && number2 > 0) {
        cout << "Both numbers are positive" << endl;
    }
    else {
        cout << "At least one number is non-positive" << endl;
    }



    // Task 3: Convert this ternary expression to an if-else block
    string result1 = (number1 == 0 || number2 == 0) ? "At least one number is zero" : "Neither number is zero";
    cout << result1 << endl;



    // Task 4: Convert this ternary expression to an if-else block
    string result2 = (number1 == number2) ? "Equal" : "Not equal";
    cout << "Number1 and Number2 are " << result2 << endl;



    // Bonus Task: Convert this if - else if - else block into a ternary expression
    if (number1 > 0) {
        cout << "Number1 is positive" << endl;
    }
    else if (number1 < 0) {
        cout << "Number1 is negative" << endl;
    }
    else {
        cout << "Number1 is zero" << endl;
    }

 
}
