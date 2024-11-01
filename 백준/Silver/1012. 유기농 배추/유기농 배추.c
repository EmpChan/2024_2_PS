#include <stdio.h>

int map[50][50];
int n,m,k,tmp,x,y;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int stackX[2500];
int stackY[2500];
int stackD[2500];
int queueX[2500];
int queueY[2500];

void init(){
   for(int i=0; i<n;i++){
      for(int j=0; j<m; j++)map[i][j] = 0;
   }
}

void getOneArea(int x,int y){ // stack 
   int top=-1;
   stackX[++top] = x;
   stackY[top] = y;
   stackD[top] = 0;
   while(top!=-1){
      if(stackD[top] == 4){
         top--;
         continue;
      }
      int nx = stackX[top] + dx[stackD[top]];
      int ny = stackY[top] + dy[stackD[top]];
      stackD[top]+=1;
      if(nx< 0 || nx>=n || ny< 0 || ny>=m)continue;
      if(!map[nx][ny])continue;
      map[nx][ny] = 0;
      stackX[++top] = nx;
      stackY[top] = ny;
      stackD[top] = 0;
   }
}

// void getOneArea(int x,int y){ // queue

// }

void sol(){
   int cnt = 0;
   scanf("%d %d %d",&n,&m,&k);
   init();
   for(int i=0; i<k; i++){
   scanf("%d %d",&x,&y);
   map[x][y] = 1; // 배추~
   }
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         if(!map[i][j])continue;
         cnt++;
         getOneArea(i,j);
      }
   }
   printf("%d\n",cnt);
}

int main(){
   int t;
   scanf("%d",&t);
   while(t--)sol();
}