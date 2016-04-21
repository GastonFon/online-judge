#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, c, maxV = 0;
    cin >> n >> c;
    vector <int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=0; i<n; i++)
    {
        int l = 0, d = 0;
        for(int j=i; j<n; j++)
        {
            if(d+a[j] < c)
                d+=a[j], l++;
            else if(d+a[j] == c)
                break;
        }
        maxV = max(l, maxV);
    }
    cout << maxV;

    return 0;
}
