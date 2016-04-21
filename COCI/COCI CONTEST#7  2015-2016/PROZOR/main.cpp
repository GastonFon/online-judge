#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int r, s, k;
    cin >> r >> s >> k;

    vector <vector <char> > v(r, vector <char> (s));

    for(int i=0; i<r; i++)
        for(int j=0; j<s; j++)
            cin >> v[i][j];

    int ra = 0, rj = 0;
    int mm = 0;
    for(int i=0; i+k<=r; i++)
    {
        for(int j=0; j+k<=s; j++)
        {
            int matadas = 0;
            for(int a=i+1; a<i+k-1; a++)
                for(int b=j+1; b<j+k-1; b++)
                    if(v[a][b] == '*')
                        matadas++;
            if(matadas > mm)
            {
                mm = matadas;
                ra = i;
                rj = j;
            }
        }
    }
    k--;
    for(int i=rj; i<rj+k; i++)
    {
        v[ra][i] = '-';
        v[ra+k][i] = '-';
    }

    for(int i=ra; i<ra+k; i++)
    {
        v[i][rj] = '|';
        v[i][rj+k] = '|';
    }
    v[ra][rj] = '+';
    v[ra+k][rj] = '+';
    v[ra][rj+k] = '+';
    v[ra+k][rj+k] = '+';

    cout << mm << endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<s; j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }

    return 0;
}
