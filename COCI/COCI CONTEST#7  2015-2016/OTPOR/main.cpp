#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

vector <float> v;
string s;
int cant = 0;

float solve(int &i)
{
    vector <float> val;

    int operador = -1;
    while(i<s.size())
    {
        if(s[i] == '(')
        {
            i++;
            val.push_back(solve(i));
        }
        else if(s[i] >= '1' && s[i] <= '9')
            val.push_back(v[s[i]-'1']);
        else if(s[i] == '-')
            operador = 1;
        else if(s[i] == '|')
            operador = 2;
        else if(s[i] == ')')
        {
            if(operador == -1)
            {
                return val[0];
            }
            else if(operador == 1)
            {
                float r = 0;
                for(int j=0; j<val.size(); j++)
                    r += val[j];
                return r;
            }
            else if(operador == 2)
            {
                float r = 0;
                for(int j=0; j<val.size(); j++)
                    r += (1/val[j]);
                return 1/r;
            }
        }
        i++;
    }
    if(operador == -1)
    {
        return val[0];
    }
    else if(operador == 1)
    {
        float r = 0;
        for(int j=0; j<val.size(); j++)
            r += val[j];
        return r;
    }
    else if(operador == 2)
    {
        float r = 0;
        for(int j=0; j<val.size(); j++)
            r += (1/val[j]);
        return 1/r;
    }
}

int main()
{
    int n;

    cin >> n;

    v = vector <float> (n);

    for(int i=0; i<n; i++)
        cin >> v[i];

    string k;
    cin >> k;

    for(int i=0; i<k.size(); i++)
        if(k[i] != 'R')
            s+=k[i];

    int sub = 0;
    float r = solve(sub);

    printf("%.6f\n", r);

    return 0;
}
