#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin >> n;
    for(int j=1; j<=n; j++)
    {
        bool ok = 1;
        for(int i=0; i<13; i++)
        {
            cin >> a;
            if(a == 0)
                ok = 0;
        }
        cout << "Set #" << j << ": ";
        if(ok)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
