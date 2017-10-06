#include <iostream>

using namespace std;

int main()
{
    int i, sosq = 0, sqos = 0;

    for ( i = 1; i <= 100; i++ )
    {
        sosq = sosq + i * i;
        sqos = sqos + i;
    }

    sqos = sqos * sqos ;
    cout << sosq - sqos << endl;
    return 0;
}
