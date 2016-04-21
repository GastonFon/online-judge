#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float n, t, s;
    cin >> n >> t >> s;

    for(int i=0; i<n; i++)
    {
        float k;
        cin >> k;
        printf("%.6f\n", (k-s+t)/2 + s);
    }

    return 0;
}
