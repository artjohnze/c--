#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    // Ask user to enter three integers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    // Perform operations
    int sum = num1 + num2 + num3;
    int difference = num1 - num2 - num3;
    int product = num1 * num2 * num3;
    double division = 0.0;
    if (num2 != 0)
    {
        division = static_cast<double>(num1) / num2; // Divide first by second
    }
    else
    {
        cout << "Division by zero is not allowed.\n";
    }

    int modulus = 0;
    if (num2 != 0 && num3 != 0)
    {
        modulus = (num1 % num2) % num3; // (first % second) % third
    }
    else
    {
        cout << "Modulus by zero is not allowed.\n";
    }

    // Display results
    cout << "\n===== RESULTS =====" << endl;
    cout << "Sum of all three numbers: " << sum << endl;
    cout << "Difference (first - second - third): " << difference << endl;
    cout << "Product of all three numbers: " << product << endl;
    cout << "Division (first ÷ second): " << division << endl;
    cout << "Modulus ((first % second) % third): " << modulus << endl;

    return 0;
}
