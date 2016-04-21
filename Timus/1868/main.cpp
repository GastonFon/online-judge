#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> prize;
    string a, u, p, b;
    int c, maxR = -1, cant = 1;

    for(int i=0; i<12; i++)
    {
        cin >> a;
        prize[a] = i+1;
    }

    cin >> c;
    for(int i=0; i<c; i++)
    {
        int guesses, r = 0;
        cin >> guesses;
        for(int j=0; j<guesses; j++)
        {
            cin >> u >> b >> p;
            int premio = prize[u];
            if(p == "gold" && premio >= 1 && premio <= 4)
                r++;
            else if(p == "silver" && premio >= 5 && premio <= 8)
                r++;
            if(p == "bronze" && premio >= 9 && premio <= 12)
                r++;
        }
        if(r > maxR)
            cant = 1, maxR = r;
        else if(r == maxR)
            cant++;
    }
    cout << cant*5;

    return 0;
}
