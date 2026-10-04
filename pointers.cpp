#include <iostream>
#include <algorithm>
#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    char *buffer = new char[8];
    std::fill_n(buffer, 8, '\0');

    char **ptr = &buffer;
    std::cout << "Buffer am stizzle" << buffer << std::endl;
    delete[] buffer;
}
