#include <stdio.h>
#include <math.h>

int main()
{
    int s = 0, tmp;
    for(int i=0; i<10; i++)
    {
        scanf("%d", &tmp);

        if(abs(100-(s+tmp)) <= abs(100-s))
        {
            s+=tmp;
            continue;
        }
        break;
    }
    printf("%d", s);
    return 0;
}