#include <stdio.h>

int main()
{
    int n, q, b, c, i;
    scanf("%d", &n);
    int a[n+1];
    a[0] = 0;
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
        a[i]+=a[i-1];
    }

    scanf("%d", &q);
    for(i=0; i<q; i++)
    {
        scanf("%d %d", &b, &c);
        printf("%d\n", a[c]-a[b-1]);
    }

    return 0;
}
