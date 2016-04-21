#include <iostream>

using namespace std;

int main()
{
    string s, p;
    getline(cin, s);
    int e = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '{')
        {
            string k(e, ' ');
            cout << k << "{" << endl;
            e+=2;
        }
        else if(s[i] == '}')
        {
            e-=2;
            string k(e, ' ');
            if(p.size())
            {
                cout << k+"  " << p << endl;
                p = "";
            }
            if(i < s.size()-1 && s[i+1] == ',')
                cout << k << "}," << endl;
            else
                cout << k << "}" << endl;
        }
        else if(s[i] == ',')
        {
            if(p.size())
            {
                string k(e, ' ');
                cout << k << p << "," << endl;
                p = "";
            }
        }
        else
            p+=s[i];
    }

    return 0;
}
