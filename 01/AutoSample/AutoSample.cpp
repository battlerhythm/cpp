#include <iostream>


int main(int argc, char* argv[])
{
    int a = 10;
    int b(a);
    auto c(b);  // interger

    std::cout << a + b + c << std::endl;

    return 0;
}