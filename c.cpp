#include <iostream>

int main()
{

    int num1, num2, num3;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    std::cout << "Enter the third integer: ";
    std::cin >> num3;

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
        std::cout << "Division or modulus by zero is undefined.\n";
        return 1;
    }

    std::cout << "Sum of all three numbers: " << sum << std::endl;
    std::cout << "Difference (first - second - third): " << difference << std::endl;
    std::cout << "Product of all three numbers: " << product << std::endl;
    std::cout << "Division (first / (second * third)): " << division << std::endl;
    std::cout << "Modulus ((first % second) % third): " << modulus << std::endl;

    return 0;
}