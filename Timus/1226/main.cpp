#include <iostream>

using namespace std;

bool isLetter(char p)
{
    return((p >= 'a' && p <= 'z') || p >= 'A' && p <= 'Z');
}

int main()
{
    string p;
    while(getline(cin, p))
    {
        int i=0;
        while(i < p.size())
        {
        while(i < p.size() && !isLetter(p[i]))
        {
            cout << p[i];
            i++;
        }
        int j=i;
        while(j < p.size() && isLetter(p[j]))
            j++;
        for(int k=j-1; k>=i; k--)
            cout << p[k];
            i = j;
        }
        cout << endl;
    }
    return 0;
}
