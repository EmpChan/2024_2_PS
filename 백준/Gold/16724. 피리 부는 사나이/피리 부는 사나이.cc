#include<iostream>
#include<vector>

using namespace std;

int n, m, cnt = 0, save = 0, visited[1001][1001] = { 0 }, c;
char map[1001][1001] = { 0 };
int savex, savey, point=0, painted[1001][1001] = { 0 },R=0,cnta=0;
int arrx[1000001] = { 0 };
int arry[1000001] = { 0 };

void dfs(int x, int y)
{
   if (R == 0 && visited[x][y] == point && painted[x][y] == 0) //찾았다 무한루프
   {
      c = 1;
      savex = x;
      savey = y;
      cnt++;
      return;
   }
   if (painted[x][y] !=0)return; //못찾으면 리턴

   arrx[cnta] = x;
   arry[cnta] = y;
   cnta++;

   visited[x][y] = point; //같은 루프에 다시 들어왔는지 확인하는 키

   R = 0;
   if (map[x][y] == 'D')dfs(x + 1, y);
   else if (map[x][y] == 'U')dfs(x - 1, y);
   else if (map[x][y] == 'L')dfs(x, y - 1);
   else dfs(x, y + 1);
}


int main()
{
   scanf("%d %d", &n, &m);
   for (int i = 0; i < n; i++)
      scanf("%s", &map[i]);
   
   for (int i = 0; i < n; i++) //완벽한 무한루프 찾기
   {
      for (int j = 0; j < m; j++)
      {
         if (painted[i][j] != 0)continue; 
         savex = i;
         savey = j;
         cnta = 0;
         point++;
         c = 0; //찾았는지 확인키
         R = 1; //첫번째에 리턴되는 거 방지
         visited[i][j] = point;
         dfs(i, j);
        for (int k = 0; k < cnta; k++)
        {
            painted[arrx[k]][arry[k]] = cnt;
        }
        
      }
   }

   printf("%d", cnt);

   return 0;
}

