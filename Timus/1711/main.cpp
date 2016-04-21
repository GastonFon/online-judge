#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    vector <vector <string> > m(n, vector <string> (3));
    vector <vector <string> > d(n, vector <string> (3));

    for(int i=0; i<n; i++)
    {
        cin >> m[i][0] >> m[i][1] >> m[i][2];
        sort(m[i].begin(), m[i].end());
        //cout << m[i][0] << " " <<  m[i][1] << " " << m[i][2] << endl;
    }
    for(int i=0; i<n; i++)
    {
        cin >> k;
        d[i] = m[k-1];
    }
    vector <string> res;
    res.push_back(d[0][0]);
    int w = 0;
    for(int i=1; i<n; i++)
    {
        int pos = 0;
        while(pos < 3 && d[i][pos] < d[i-1][w])
            pos++;
        if(pos == 3)
        {
            cout << "IMPOSSIBLE";
            return 0;
        }
        res.push_back(d[i][pos]);
        w = pos;
    }

    for(int i=0; i<res.size(); i++)
        cout << res[i] << endl;

    return 0;
}
