#include <stdio.h>
#include <math.h>

int cnts[2000001];

int main()
{
    int n, tmp, x, s = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &tmp);
        cnts[tmp]++;
    }
    scanf("%d", &x);
    for(int i=0; i<=x/2; i++)
    {  
        if(cnts[i] && cnts[x-i])
        {
            if(i == x-i)
            {
                s+= cnts[i]/2;
            }
            else
            {
                s+= cnts[i]*cnts[x-i];
            }
        }
    }
    printf("%d", s);
    return 0;
}