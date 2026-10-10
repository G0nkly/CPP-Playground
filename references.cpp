#include <iostream>
#define LOG(x) std::cout << x << std::endl

void IncrementWithPointer(int *value)
{
    (*value)++;
}

void incrementWithReference(int &value)
{
    value++;
}

int main()
{
    int a = 5;
    int b = 8;

    IncrementWithPointer(&a);
    incrementWithReference(a);
    LOG(a);

    int &ref = a;
    // this changes a to b
    ref = b;

    // if you want to change values
    int *reff = &a;
    *reff = 2;
    reff = &b;
    *reff = 1;

    LOG(a);
    LOG(b);

    ref = 2;
    LOG(a);
}
