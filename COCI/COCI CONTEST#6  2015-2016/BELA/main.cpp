#include <iostream>

using namespace std;

int main()
{
    int n;
    char d;
    cin >> n;
    cin >> d;
    long long puntos = 0;
    for(int i=0; i<n*4; i++)
    {
        string s;
        cin >> s;
        char k = s[1];
        char l = s[0];
        if(l == 'A')
            puntos+=11;
        else if(l == 'K')
            puntos+=4;
        else if(l == 'Q')
            puntos+=3;
        else if(l == 'J')
        {
            if(d == k)
                puntos+=20;
            else
                puntos+=2;
        }
        else if(l == 'T')
            puntos+=10;
        else if(l == '9')
        {
            if(d == k)
                puntos+=14;
        }
    }
    cout << puntos << endl;

    return 0;
}
