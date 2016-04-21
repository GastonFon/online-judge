#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    int e = 1, maxS = 0;
    while(maxS+e < n)
        maxS+=e, e++;

    while(true)
    {
        if((n-maxS)%e == 0)
        {
            cout << (n-maxS)/e << " " << e << endl;
            break;
        }
        e--;
        maxS-=e;
    }

    return 0;
}
