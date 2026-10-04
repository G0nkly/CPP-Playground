#include <iostream>
#include "Log.h"

static int Multiply(int a, int b)
{
    Log("Mulitply");
    return a * b;
}

int main()
{
    int x = 6;
    bool comparisonResult = x == 5;
    if (comparisonResult)
        std::cout << Multiply(5, 8) << std::endl;
    std::cin.get();
}
