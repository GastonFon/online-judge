#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, a, row = 0, col = 3;
    cin >> n >> k;
    vector <vector <char> > c(((n/k) + (bool)(n%k)), vector <char> (k*4, ' '));
    vector <int> numeros(((n/k) + (bool)(n%k))*4, 0);

    for(int i=0; i<n; i++)
    {
        cin >> a;
        int r = row, w = col;
        if(a)
            while(a)
                c[r][w] = (a%10 + '0'), a/=10, w--;
        else
            c[row][col] = '0';
        numeros[row]++, row++;
        if(row == c.size())
            row = 0, col +=4;
    }

    for(int i=0; i<c.size(); i++, cout << endl)
        for(int j=0; j<numeros[i]*4; j++)
            cout << c[i][j];

    return 0;
}
