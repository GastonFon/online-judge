#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a, b, c;
        cin >> a >> b;
        int r[b];
        c = b;
        while(b)
        {
            r[b-1] = a/b;
            a -= r[b-1];
            b--;
        }
        b = c;
        int res = 0;
        for(int i=0; i<b-1; i++)
            for(int j=i+1; j<b; j++)
                res += (r[i]*r[j]);

        cout << res << endl;
    }
    return 0;
}
