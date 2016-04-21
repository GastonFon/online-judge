/*
ID: gastonf1
LANG: C++
TASK: ride
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("ride.in");

    string s, r;
    in >> s >> r;

    in.close();

    long long a = 1, b = 1;
    for(int i=0; i<s.size(); i++)
        a*=(s[i]-'A'+1);
    for(int i=0; i<r.size(); i++)
        b*=(r[i]-'A'+1);

    ofstream out("ride.out");
    if(a%47 == b%47)
        out << "GO" << endl;
    else
        out << "STAY" << endl;
    out.close();

    return 0;
}
