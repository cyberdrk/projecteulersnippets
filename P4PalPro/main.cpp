#include <iostream>

using namespace std;

int isPal( int N )
{
    int n = N , dig, rev = 0;

    while ( N > 0 )
    {
        dig = N % 10;
        rev = rev * 10 + dig;
        N = N / 10;
    }

    if ( rev == n )
        return 1;
    else
        return 0;
}

int main()
{
    int i, j, fl = 0, pr, lpr = 0;

    for ( i = 100; i <= 999; i++ )
    {
        for ( j = 100; j <= 999; j++ )
        {
            pr = i * j;
            fl = isPal( pr );
            if (fl == 1)
                {
                    if ( pr > lpr )
                       {
                         lpr = pr;
                         cout << lpr << " = " << i << " * " << j << endl;
                       }
                }
        }
    }

    cout << lpr << " = " << i << " * " << j << endl;
    return 0;
}
