#include <iostream>

using namespace std;

int main()
{
    long m = 3, i;
    int fl = 0, n = 1     ;
    while ( n < 10001 )
    {
        for ( i = 3; i < m; i+=2 )
        {
            if( m % i == 0 )
            {
                fl = 1;
                break;
            }
        }

        if( fl == 0 )
            n++;

        fl = 0;
        m++;
    }
    cout << (m - 1) << endl;
    return 0;
}
