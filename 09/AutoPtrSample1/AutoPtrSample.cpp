#include <memory>
#include <iostream>

using namespace std;

class CMyData
{
    public:
    CMyData() { cout << "CMyData()" << endl; }
    ~CMyData() { cout << "~CMyData()" << endl; }
};

int main(int argc, char* argv[])
{
    cout << "****Begin****" << endl;
    {
        auto_ptr<CMyData> ptrTest(new CMyData);
    }

    cout << "****End****" << endl;

    return 0;
}
