#include <iostream>

using namespace std;

void TestFunc(void) {
    cout << "::TestFunc()" << endl;
}

namespace TEST
{
    void TestFunc(void) {
        cout << "TEST::TestFunc()" << endl;
    }
}

namespace MYDATA
{
    void TestFunc(void) {
        cout << "DATA::TestFunc()" << endl;
    }
}

int main(int argc, char* argv[])
{
    TestFunc(); //Implicit Global
    ::TestFunc(); // Explicit Global
    TEST::TestFunc();
    MYDATA::TestFunc();

    return 0;
}