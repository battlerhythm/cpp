#include <iostream>

using namespace std;

int nData = 100;

namespace TEST
{
    int nData = 200;
}

// using namespace TEST; // error: reference to 'nData' is ambiguous

int main(int argc, char* argv[])
{
    cout << nData << endl;
    cout << ::nData << endl; // Explicit!

    return 0;
}