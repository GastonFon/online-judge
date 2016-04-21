#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector <int> s(n);
    for(int i=0; i<n; i++)
        cin >> s[i];
    s.push_back(e);
    sort(s.begin(), s.end());

    bool encontrado = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] <= e && e <= s[i+1] && s[i] <= 0 && 0 <= s[i+1])
        {
            encontrado = 1;
            if(e < 0)
            {
                int r = 2*s[i+1] - s[i];
                int l = -s[i];
                cout << r << " " << l << endl;
            }
            else
            {
                int r = s[i+1];
                int l = -2*s[i] + s[i+1];
                cout << r << " " << l << endl;
            }
        }
    }
    if(!encontrado)
        cout << "Impossible" << endl;

    return 0;
}
