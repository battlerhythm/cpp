#include <cstdio>

class USERDATA
{
    public:
    int nAge;
    char szName[32];

    void Print(void)
    {
        printf("%d, %s\n", nAge, szName);
    }
};

int main(int argc, char* argv[])
{
    USERDATA user = {10, "Charles"}; // Problematic

    user.Print();

    return 0;
}