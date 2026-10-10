#include <iostream>
#include <array>
#include <vector>

#define LOG(x) std::cout << x << std::endl

void undertandPointers()
{
    int *intPointer = new int();
    // Changing adress
    LOG(intPointer);
    (*intPointer)++;
    LOG(*intPointer);
    // changing values
    *intPointer = 5;
    LOG(*intPointer);
    int &ref = *intPointer;
    LOG(&ref);
    LOG(intPointer);
    ref = 10;
    LOG(*intPointer);

    char arr[3] = {'1', '2', '3'};
    char *array = new char[3]{'1', '2', '3'};
    std::array<char, 3> arry = {'1', '2', '3'};
    std::vector<char> vec = {'1', '2', '3'};
    for (char c : vec)
    {
        std::cout << c << std::endl;
    }
}

void understandPointerTwo()
{
    int x = 5;
    int y = 9;

    int *p = &x; // p points to x
    int &r = x;  // r is another name for x

    *p = 7; // x becomes 7
    r = 8;  // x becomes 8

    p = &y;  // p now points to y
    *p = 10; // y becomes 10
    LOG(x);
    LOG(y);
}

int main()
{
    char *buffer = new char[8];
    std::fill_n(buffer, 8, '\0');

    char **ptr = &buffer;
    std::cout << "Buffer am stizzle" << buffer << std::endl;
    delete[] buffer;
    undertandPointers();
    understandPointerTwo();
}
