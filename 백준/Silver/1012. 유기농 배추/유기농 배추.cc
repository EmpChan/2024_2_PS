#include <stdio.h>


void sol(int x, int y);
void in();
void ser();
int vet[50][50] = { 0 };
int h, w;
int T, k;
int m, n;
int cnt=0;
int main() {
   scanf("%d",&T);

   for (int i = 0; i < T; i++) {
      scanf("%d %d %d", &n, &m,&k);
      in();
      ser();
      printf("%d\n", cnt);
      cnt = 0;
   }
   return 0;

}
void in() {

   for (int i = 0; i < k; i++) {
      scanf("%d %d", &h, &w);
      vet[h][w] = 1;
   }
   
}

void ser() {
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         if (vet[i][j] == 1) {
            vet[i][j]=0;
            sol(i, j);
            cnt++;
         }
      }
   }
}

void sol(int x,int y) {

   int dx[] = { 1,0,-1,0 };
   int dy[] = { 0,1,0,-1 };

   for (int i = 0; i < 4; i++) {
      int nx = dx[i] + x;
      int ny = dy[i] + y;
      if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
      if (vet[nx][ny] == 0)continue;
      vet[nx][ny] = 0;
      sol(nx, ny);
   }

}