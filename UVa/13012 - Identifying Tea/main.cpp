#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, d, e;
    while(cin >> n)
    {
        cin >> a >> b >> c >> d >> e;
        cout << (a==n) + (b==n) + (c==n) + (d==n) + (e==n) << endl;
    }
    return 0;
}
