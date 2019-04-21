#include <memory>
#include <iostream>

using namespace std;

class CMyData
{
    public:
    CMyData() { cout << " CMyData()" << endl; }
    ~CMyData() { cout << "~CMyData()" << endl; }
    void TestFunc() { cout << "CMyData::TestFunc()" << endl; }
};

int main(int argc, char* argv[])
{
    auto_ptr<CMyData> ptrTest(new CMyData);
    auto_ptr<CMyData> ptrNew;

    cout << "0x" << ptrTest.get() << endl;

    ptrNew = ptrTest; // Copying 'auto_ptr' pointer to another does not create two equal objects since one has lost its ownership of the pointer.
    
    cout << "0x" << ptrTest.get() << endl;

    ptrTest->TestFunc(); // This line makes error    

    return 0;
}

