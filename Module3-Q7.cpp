#include <iostream> // inlcude iostream library that provides inout and output functionality using streams.

int main() { // int main defines the netry point of start in c++
    float num1, num2, num3, num4; // declare the variables that can hold values upto 7 digits (float).

    std::cout << "Enter the first number: "; // print the text in the quotes 
    std::cin >> num1; // enter input value for num1
    std::cout << "Enter the second number: ";
    std::cin >> num2; // enter input value for num2
    std::cout << "Enter the third number: ";
    std::cin >> num3; // enter input value for num3
    std::cout << "Enter the fourth number: ";
    std::cin >> num4; // enter input value for num4

    float average = (num1 + num2 + num3 + num4) / 4; // Take the average of all 4 numbers 

    std::cout << "The average of " << num1 << ", " << num2 << ", " << num3 << ", and " << num4 << " is: " << std::fixed << std::setprecision(2) << average << std::endl; // print all the values includeing the calculated values.

    return 0;
}
