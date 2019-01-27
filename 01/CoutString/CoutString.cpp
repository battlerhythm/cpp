#include <string>
#include <iostream>

int main(int argc, char *argv[])
{
    std::string strData = "Test string";
    std::cout << "Sample string" << std::endl;
    std::cout << strData << std::endl;

    strData = "New String";
    std::cout << strData << std::endl;

    std::cout << "I am " << 20 << " years" << " old" << std::endl;

    return 0;
}