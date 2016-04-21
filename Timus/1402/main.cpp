#include <iostream>

using namespace std;

/*
See my BigNum library for producto() and suma() functions
*/

string fact(int x)
{
    if(x == 1)
        return "0";
    string s = "0";
    for(int k=1; k<x; k++)
    {
        string r = "1";
        for(int i=(x-k); i<=x; i++)
            r = producto(r, toStr(i));
        s = suma(s, r);
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}
