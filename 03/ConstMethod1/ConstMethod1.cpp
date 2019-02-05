#include <iostream>

using namespace std;

class CTest
{
    public:
        CTest(int nParam) : m_nData(nParam) {}
        ~CTest() {}

        int GetData() const
        {
            // SetData(20); // error: 'this' argument to member function 'SetData' has type 'const CTest', but function is not marked const

            // m_nData = 20; // error: cannot assign to non-static data member within const member function 'GetData'

            return m_nData;
        }

        int SetData(int nParam) { m_nData = nParam; }

    private:
        int m_nData = 0;
};

int main(int argc, char* argv[])
{
    CTest a(10);
    cout << a.GetData() << endl;

    return 0;
}