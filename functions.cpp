#include <iostream>

int Multiply(int a, int b)
{
    return a * b;
}

void MultiplyAndLog(int a, int b)
{
    std::cout << Multiply(a, b) << std::endl;
}

int main()
{
    MultiplyAndLog(3, 2);
    MultiplyAndLog(3, 5);
    MultiplyAndLog(90, 45);
    std::cin.get();
}
