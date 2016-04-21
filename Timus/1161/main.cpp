#include <iostream>
#include <queue>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue <float> s;
    for(int i=0; i<n; i++)
    {
        int k;
        cin >> k;
        s.push(k);
    }

    while(s.size() > 1)
    {
        float a, b;

        a = s.top();
        s.pop();
        b = s.top();
        s.pop();

        float c = sqrt(a*b)*2;
        s.push(c);
    }

    printf("%.2f\n", s.top());

    return 0;
}
