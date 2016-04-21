#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int k, a[6], b[6] = {10, 50, 100, 500, 1000, 5000};
    for(int i=0; i<6; i++)
        cin >> a[i];
    cin >> k;

    ///Saber la máxima cantidad que puede comprar

    long long tiene = 0;

    for(int i=0; i<6; i++)
        tiene += a[i]*b[i];

    int masChico = 99999;

    for(int i=0; i<6; i++)
        if(a[i])
            masChico = min(masChico, b[i]);

    long long minimo = tiene - masChico;

    vector <int> r;

    for(int i=tiene/k; i*k > minimo; i--)
        r.push_back(i);

    cout << r.size() << endl;
    for(int i=r.size()-1; i>=0; i--)
        cout << r[i] << " ";


    return 0;
}
