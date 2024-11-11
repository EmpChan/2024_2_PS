#include <stdio.h>

int map[50][50];
int n,m,k,tmp,x,y;
int dx[] = {-1,-1,-1,0,0,1,1,1};
int dy[] = {-1,0,1,-1,1,-1,0,1};
int queueX[2500];
int queueY[2500];

void getOneArea(int x,int y){   
   int f=0,e=0;
   queueX[f]=x;
   queueY[f]=y;
   while(f<=e){
      for(int i=0; i<8; i++){
         int nx = queueX[f] + dx[i];
         int ny = queueY[f] + dy[i];
         if(nx<0 || nx>=n || ny <0 || ny>=m)continue;
         if(!map[nx][ny])continue;
         map[nx][ny] = 0;
         queueX[++e] = nx;
         queueY[e] = ny;
      }
      f++;
   }
}
void sol(){
   int cnt=0;
   for(int i=0; i<50; i++){
      for(int j=0; j<50; j++){
         map[i][j] = 0;
      }
   }
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         scanf("%d",&map[i][j]);
      }
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
   while(1){
      scanf("%d %d",&m,&n);
      if(!(n&&m))return 0;
      sol();
   }
   return 0;
}