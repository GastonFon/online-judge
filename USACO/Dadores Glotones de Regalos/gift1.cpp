/*
ID: gastonf1
LANG: C++
TASK: gift1
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ifstream in("gift1.in");
    int n;
    in >> n;
    map<string, int> mapa;
    string nombre;
    vector <int> v(n, 0);
    vector <string> str(n);
    for(int i=0; i<n; i++)
    {
        in >> nombre;
        str[i] = nombre;
        mapa[nombre] = i;
    }
    int x, y;

    while(in >> nombre >> x >> y)
    {
        if(y)
        {
            v[mapa[nombre]]-=(x-(x%y));
            int c = (x-(x%y))/y;
            for(int i=0; i<y; i++)
            {
                in >> nombre;
                v[mapa[nombre]]+=c;
            }
        }
    }
    in.close();

    ofstream out("gift1.out");
    for(int i=0; i<mapa.size(); i++)
        out << str[i] << " " << v[i] << endl;
    out.close();

    return 0;
}
