#include <iostream>
using namespace std; // Make names from std visible without the need for "std::"

double square(double x) // square a double precision floating-point number
{
    return x*x;
}

void print_square(double x)
{
    cout << "The square of " << x << " is " << square(x) << "\n";
}

int main()
{
    print_square(1.234); // Print: the square of 1.234 is 1.52276
}