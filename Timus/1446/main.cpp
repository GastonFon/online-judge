#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector <string> a, b, c, d;
    string s, p;
    getline(cin, s);
    for(int i=0; i<n; i++)
    {
        getline(cin, s);
        getline(cin, p);
        if(p == "Slytherin")
            a.push_back(s);
        else if(p == "Hufflepuff")
            b.push_back(s);
        else if(p == "Gryffindor")
            c.push_back(s);
        else if(p == "Ravenclaw")
            d.push_back(s);
    }

    cout << "Slytherin:" << endl;
    for(int i=0; i<a.size(); i++)
        cout << a[i] << endl;
    cout << endl;
    cout << "Hufflepuff:" << endl;
    for(int i=0; i<b.size(); i++)
        cout << b[i] << endl;
    cout << endl;
    cout << "Gryffindor:" << endl;
    for(int i=0; i<c.size(); i++)
        cout << c[i] << endl;
    cout << endl;
    cout << "Ravenclaw:" << endl;
    for(int i=0; i<d.size(); i++)
        cout << d[i] << endl;

    return 0;
}
