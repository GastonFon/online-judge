#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

void fastScanf(int* x)
{
    char c = getchar();
    *x = 0;
    for(; (c<48)||(c>57); c = getchar());
    for(; (c>47)&&(c<58); c = getchar())
        *x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48);
}

void fastPrintf(int n, char k)
{
    if(n == 0)
        putchar('0');
    else
    {
        char buf[11];
        buf[10] = ' ';
        int i = 9;
        while(n)
            buf[i--] = n % 10 + '0', n /= 10;
        i++;
        while(buf[i] != ' ')
            putchar(buf[i]), i++;
    }
    putchar(k);
}

int main()
{
    int n, i, j, a, b;
    fastScanf(&n);

    vector<int>q[101];

    for(i=0; i<n; i++)
    {
        fastScanf(&a), fastScanf(&b);
        q[b].push_back(a);
    }

    for(i=100; i>=0; i--)
        for(j=0; j<q[i].size(); j++)
            fastPrintf(q[i][j], ' '), fastPrintf(i, '\n');

    return 0;
}
