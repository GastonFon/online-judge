#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    vector <int> v;
    cin >> k;
    while(k >= 0)
    {
        v.push_back(k);
        cin >> k;
    }

    for(int i=0; i<=v.size()-n; i++)
    {
        int r = 0;
        for(int j=i; j<i+n; j++)
            r = max(r, v[j]);
        cout << r << endl;
    }

    return 0;
}
