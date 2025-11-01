#include <iostream>
using namespace std;
int main()
{

    int num1, num2, num3;

    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "Enter the third integer: ";
    cin >> num3;

    int sum = num1 + num2 + num3;
    int difference = num1 - num2 - num3;
    int product = num1 * num2 * num3;
    double division = 0.0;
    int modulus = 0;

    if (num2 != 0 && num3 != 0)
    {
        division = static_cast<double>(num1) / (num2 * num3);
        modulus = (num1 % num2) % num3;
    }
    else
    {
        cout << "Division or modulus by zero is undefined.\n";
        return 1;
    }

    cout << "Sum of all three numbers: " << sum << endl;
    cout << "Difference (first - second - third): " << difference << endl;
    cout << "Product of all three numbers: " << product << endl;
    cout << "Division (first / (second * third)): " << division << endl;
    cout << "Modulus ((first % second) % third): " << modulus << endl;

    return 0;
}