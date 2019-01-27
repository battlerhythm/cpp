#include <iostream>

int main(int argc, char* argv[])
{
    // Creating instance dynamically
    int *pData = new int;

    // Creating instance dynamically with initial value
    int *pNewData = new int(10);

    *pData = 5;
    std::cout << *pData << std::endl;
    std::cout << *pNewData << std::endl;

    delete pData;
    delete pNewData;

}