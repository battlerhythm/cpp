#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
    int nData = 10;         // &nData: address of nData

    int &ref = nData;       // Address of ref = address of nData  
    ref = 20;               // value of ref == value of nData = 20
    cout << nData << endl;

    int *pnData = &nData;   // Address of pnData = Address of nData
    *pnData = 30;           // value of pnData == value of nData = 30
    cout << nData << endl;

    return 0;
}