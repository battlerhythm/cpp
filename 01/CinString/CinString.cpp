#include <string>
#include <cstdio>
#include <iostream>


int main(int argc, char* argv[])
{
    int nAge;
    std::cout << "Enter your age." << std::endl;
    std::cin >> nAge;

    char szJob[32];
    std::cout << "Enter your job." << std::endl;
    std::cin >> szJob;

    std::string strName;
    std::cout << "Enter your name." << std::endl;
    std::cin >> strName;

    std::cout << "You are " << strName << ", " << nAge << " years old " << szJob << std::endl;

    return 0;
}