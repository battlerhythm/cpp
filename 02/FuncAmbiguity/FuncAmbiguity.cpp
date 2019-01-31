#include <iostream>

void TestFunc(int a) // Grammertically fine
{
    std::cout << "TestFunc(int)" << std::endl;
}

void TestFunc(int a, int b = 10) // Grammertically fine
{
    std::cout << "TestFunc(int, int)" << std::endl;
}

int main(int argc, char* argv[])
{
    TestFunc(5); // Compile error at here

    return 0;
}

/*
g++ -g -Wall    -c -o FuncAmbiguity.o FuncAmbiguity.cpp
FuncAmbiguity.cpp:15:5: error: call to 'TestFunc' is ambiguous
    TestFunc(5);
    ^~~~~~~~
FuncAmbiguity.cpp:3:6: note: candidate function
void TestFunc(int a)
     ^
FuncAmbiguity.cpp:8:6: note: candidate function
void TestFunc(int a, int b = 10)
     ^
1 error generated.
make: *** [FuncAmbiguity.o] Error 1
*/