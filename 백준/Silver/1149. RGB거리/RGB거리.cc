#include <stdio.h>

int max(int a, int b);
int n, r[1001], g[1001], b[1001], rdp[1001], gdp[1001], bdp[1001];

int main()
{
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &r[i], &g[i], &b[i]);
    }
    rdp[0] = r[0];
    gdp[0] = g[0];
    bdp[0] = b[0];
    rdp[1] = r[1] + max(g[0], b[0]);
    gdp[1] = g[1] + max(r[0], b[0]);
    bdp[1] = b[1] + max(g[0], r[0]);
    for (int i = 2; i < n; i++)
    {
        rdp[i] = r[i] + max(gdp[i - 1], bdp[i - 1]);
        bdp[i] = b[i] + max(rdp[i - 1], gdp[i - 1]);
        gdp[i] = g[i] + max(rdp[i - 1], bdp[i - 1]);
    }
    printf("%d", max(rdp[n - 1], max(gdp[n - 1], bdp[n - 1])));
    return 0;
}

int max(int a, int b)
{
    if (a > b) return b;
    else return a;
}