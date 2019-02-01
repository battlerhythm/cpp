#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int nInput = 0;
    cout << "Input a number bigger than 11" << endl;
    cin >> nInput;

    if(nInput > 10)
    {
        cout << nInput << endl;
    }
    else
    {
        cout << "Error" << endl;
    }

    return 0;    
}