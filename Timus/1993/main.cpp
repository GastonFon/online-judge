#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int i=0;
    while(i < s.size())
    {
        string r[3] = {"", "", ""};
        bool hay[3] = {0, 0, 0}, dot = 1;
        while(i < s.size() && s[i] != '(' && s[i] != '[' && s[i] != '{'&& s[i] != ')' && s[i] != ']' && s[i] != '}')
        {
            cout << s[i];
            dot = (s[i] == '.');
            i++;
        }
        while(i<s.size() && (!hay[0] || !hay[1] || !hay[2]))
        {
            if(s[i] == '(')
            {
                hay[0] = 1;
                i++;
                while(s[i] != ')')
                    r[0]+=s[i], i++;
            }
            else if(s[i] == '[')
            {
                hay[1] = 1;
                i++;
                while(s[i] != ']')
                    r[1]+=s[i], i++;
            }
            else if(s[i] == '{')
            {
                hay[2] = 1;
                i++;
                while(s[i] != '}')
                    r[2]+=s[i], i++;
            }
            i++;
        }
        r[0][0] = tolower(r[0][0]);
        r[1][0] = tolower(r[1][0]);
        if(dot)
            r[2][0] = toupper(r[2][0]);
        else
            r[2][0] = tolower(r[2][0]);

        cout << r[2] << " " << r[0] << " " << r[1];
    }

    return 0;
}
