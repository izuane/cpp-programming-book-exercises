#include <iostream>
// namespace is a way to avoid name clashes
namespace My_code {
    class complex {/* ... */}
    complex sqrt(complex);

    int main();
}

int My_code::main()
{
    complex z{1, 2};
    auto z2 = sqrt(2);

    std::cout << '{' << z2.real() << ',' << z2.imag() << "}\n";
}

int main()
{
    return My_code::main();
}