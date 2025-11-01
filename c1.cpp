#include <iostream>

using namespace std;

int main()
{
    // Declare variables to store the three integers
    int num1, num2, num3;

    // Ask the user to enter three integers
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "Enter the third integer: ";
    cin >> num3;

    // Perform the operations
    int sum = num1 + num2 + num3;
    int substruct = num1 - num2 - num3;
    int multiply = num1 * num2 * num3;
    double division = 0.0; // Initialize to 0.0 to handle floating-point division
    int modulus = 0;

    // Check for division by zero
    if (num2 != 0 && num3 != 0)
    {
        division = static_cast<double>(num1) / (num2 * num3);
        modulus = (num1 % num2) % num3;
    }
    else
    {
        cout << "Division or modulus by zero is undefined.\n";
        return 1; // Return non-zero to indicate an error
    }

    // Display the results
    cout << "Sum of all three numbers: " << sum << endl;
    cout << "substruct (first - second - third): " << substruct << endl;
    cout << "multiply of all three numbers: " << multiply << endl;
    cout << "Division (first / (second * third)): " << division << endl;
    cout << "Modulus ((first % second) % third): " << modulus << endl;

    return 0; // Return 0 to indicate successful execution of the program
}