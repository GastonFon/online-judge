/*
ID: gastonf1
LANG: C++
TASK: beads
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

int largo(string s, int p)
{
    int r = 0;
    int i = p;
    char cuenta = 'w';
    while(s[i] == '#' || s[i] == cuenta || s[i] == 'w' || cuenta == 'w')
    {
        if(s[i] != '#')
        {
            r++;
            if(s[i] != 'w')
                cuenta = s[i];
        }
        i--;
    }

    i = p;
    cuenta = 'w';
    while(s[i] == '#' || s[i] == cuenta || s[i] == 'w' || cuenta == 'w')
    {
        if(s[i] != '#')
        {
            r++;
            if(s[i] != 'w')
                cuenta = s[i];
        }
        i++;
    }
    return r;
}

int main()
{
    ifstream in("beads.in");
    string r, s;
    int n;
    in >> n >> r;
    in.close();
    for(int i=0; i<r.size(); i++)
    {
        s+=r[i];
        s+="#";
    }

    s+=s;
    s = "$#" + s + "#" + s + "#" + s + "$";
    int resultado = 0;
    for(int i=2*n; i<=4*n; i++)
    {
        if(s[i] == '#')
        {
            int l = largo(s, i);
            l = min(l, n);
            resultado = max(resultado, l);
        }
    }
    ofstream out("beads.out");
    out << resultado << endl;
    out.close();

    return 0;
}
