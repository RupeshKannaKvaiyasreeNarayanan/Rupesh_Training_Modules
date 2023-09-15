#include <iostream>


int main()
{
    int x;
    int y;
    int z;
    int a;
    
    std::cout << "Enter a value for x ";
    std::cin >> x;
    std::cout << "Enter a value for y ";
    std::cin >> y;
    
    z = x + y;

    std::cout << z;
    
    a = z%2;
    
    if (a == 0){ 
    std::cout << " This is an even number";
    }
    else {
    std::cout << " This is an odd number";
    }

    return 0;
}

