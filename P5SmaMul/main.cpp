#include <iostream>

using namespace std;

int main()
{
    long long i =  116396280;
    long long c = 1, sat = 0, k = 1;
    while ( sat != 1)
    {
        k = 1;
        while ( k <= 20)
        {
            if ( i % k != 0)
            {
                sat = 0;
                break;
            }

            k ++;
        }
        if ( k == 21 )
            break;
        c ++;
        i = ( i * c ) / ( c - 1);

    }
    cout << i << endl;
    return 0;
}
