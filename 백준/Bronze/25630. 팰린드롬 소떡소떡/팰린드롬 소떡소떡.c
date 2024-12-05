#include <stdio.h>

int main()
{
    char str[101];
    int n, cnt = 0;
    scanf("%d %s", &n, str);
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1]) cnt++;
    }
    printf("%d", cnt);
    return 0;
}