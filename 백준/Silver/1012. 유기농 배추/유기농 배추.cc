#include <stdio.h>

int arr[51][51], cnt = 0, n, m;

void dfs(int x, int y)
{
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    for (int i = 0; i < 4; i++)
    {
        int nx = dx[i] + x;
        int ny = dy[i] + y;
        if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
        if(!arr[nx][ny])continue;
        arr[nx][ny] = 0;
        dfs(nx,ny);
    }
}

int main()
{
    int t, k, x, y;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &m, &n, &k);
        for (int j = 0; j < k; j++)
        {
            scanf("%d %d", &x, &y);
            arr[x][y] = 1;
        }
        for (int j = 0; j < m; j++)
        {
            for (int h = 0; h < n; h++)
            {
                if (!arr[j][h])continue;
                arr[j][h] = 0;
                dfs(j, h);
                cnt++;
            }
        }
        printf("%d\n", cnt);
        cnt = 0;
    }
    return 0;
}