#include <algorithm>
#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

vector <int> p;
vector <pair<int, int> > z;
long long n, resultados;

int gcd(int a, int b)
{
    if(!b)
        return a;
    return gcd(b, a%b);
}

bool valido(vector <int> a)
{
    vector <bool> v(n-1, 0);
    for(int i=0; i<a.size(); i++)
    {
        int d1 = z[a[i]].first-1, d2 = z[a[i]].second-2;
        for(int j=d1; j<=d2; j++)
            v[j] = 1;
    }

    for(int i=0; i<n-1; i++)
        if(!v[i])
            return 0;

    return 1;
}

void mostrarT2(vector <int> a)
{
    if(valido(a))
    {/*
        cout << "{";
        for(int i=0; i<a.size(); i++)
        {
            cout << "{" << z[a[i]].first << "," << z[a[i]].second << "}";
            if(i<a.size()-1)
                cout << ",";
        }
        cout << "}" << endl;*/
        resultados++;
    }
    if(a.size()<z.size())
    {
        for(int i=a.back()+1; i<z.size(); i++)
        {
            vector <int> r = a;
            r.push_back(i);
            mostrarT2(r);
        }
    }
}

void armarPares(int n)
{
    for(int i=2; i<=n; i++)
        for(int j=1; j<i; j++)
            if(gcd(i, j) == 1)
                z.push_back(make_pair(min(i, j), max(i, j)));
}

int main()
{
    cin >> n;
    resultados = 0;
    armarPares(n);
    sort(z.begin(), z.end());
    for(int i=0; i<z.size(); i++)
    {
        vector <int> r;
        r.push_back(i);
        mostrarT2(r);
    }

    cout << (resultados%1000000000);

    return 0;
}
