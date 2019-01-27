#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << 10 << std::endl;       // 10
    std::cout << 10U << std::endl;      // 10
    std::cout << 10.5F << std::endl;    // 10.5
    std::cout << 10.5 << std::endl;     // 10.5
    std::cout << 3 + 4 << std::endl;    // 7

    return 0;
}