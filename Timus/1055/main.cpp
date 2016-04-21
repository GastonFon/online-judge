#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>
#define lim 50005

using namespace std;

vector <int> primos;
bitset <lim> isPrime, esPrimo;

void genPrimos()
{
    int i=2;
    while(i*i < lim)
    {
        for(int j=i*i; j<lim; j+=i)
            isPrime[j] = 1; ///Guarda! Acá el 0 es un 1, y el 1 es un 0. En todo el código es lo mismo
        primos.push_back(i);
        esPrimo[i] = 1;
        isPrime[i] = 1;
        while(isPrime[i])
            i++;
    }

    for(int j=i; j<lim; j++)
        if(!isPrime[j])
            primos.push_back(j), esPrimo[j] = 1;
}

void combinatoria(int n, int m)
{
    vector <int> r(50001, 0);

    for(int i=m+1; i<=n; i++)
    {
        if(esPrimo[i])
            r[i]++;
        else
        {
            int a = i;
            for(int j=0; a && primos[j] <= a; j++)
                while(a%primos[j] == 0)
                {
                    a/=primos[j];
                    r[primos[j]]++;
                }
        }
    }

    for(int i=1; i<=n-m; i++)
    {
        if(esPrimo[i])
            r[i]--;
        else
        {
            int a = i;
            for(int j=0; a && primos[j] <= a; j++)
                while(a%primos[j] == 0)
                {
                    a/=primos[j];
                    r[primos[j]]--;
                }
        }
    }

    int res = 0;
    for(int i=0; i<50001; i++)
        if(r[i] > 0)
            res++;

    cout << res << endl;
}

int main()
{
    genPrimos();

    int n, m;
    cin >> n >> m;
    combinatoria(n, m);
    return 0;
}
