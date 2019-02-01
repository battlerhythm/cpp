#include <iostream>
using namespace std;

class CTest
{
    public:
    CTest()
    {
        cout << "CTest() : Constructor" << endl;
        m_nData = 10;
    }

    int m_nData;

    void PrintData(void)
    {
        cout << m_nData << endl;
    }
    
};

int main(int argc, char* argv[])
{
    cout << "main function start" << endl;

    CTest t;
    t.PrintData();

    cout << "main function end" << endl;
    
    return 0;
}