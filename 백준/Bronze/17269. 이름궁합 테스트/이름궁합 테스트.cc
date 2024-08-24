#include <stdio.h>
#include <string.h>

int arr[5][26]=
{
   {0},// 획 0
   {'C', 'G', 'I', 'J', 'L', 'O', 'S', 'U', 'V', 'W', 'Z'},// 획 1
   {'B', 'D', 'N', 'P', 'Q', 'R', 'T', 'X', 'Y'},// 획 2
   {'A', 'F', 'H', 'K', 'M'},// 획 3
   {'E'} // 획 4
};

int findAlpha(char a){
   for(int i=1; i<5; i++){
      for(int j=0; arr[i][j]!=0; j++){
         if(arr[i][j] == a)return i;
      }
   }
}

int main(){
   int n,m;
   char w1[101],w2[101];
   int arr[202] = {0};
   scanf("%d %d", &n, &m);
   scanf("%s %s", w1, w2);
   int i = 0,j =0, cnt = 0;
   while(i<n && j< m){
      arr[cnt++] = findAlpha(w1[i++]);
      arr[cnt++] = findAlpha(w2[j++]);
   }
   while(i<n){
      arr[cnt++] = findAlpha(w1[i++]);
   }
   while(j<m){
      arr[cnt++] = findAlpha(w2[j++]);
   }
   for(int i=0; i<n+m-2; i++){
      for(int j=0; j<n+m-i-1; j++){
         arr[j] = (arr[j]+arr[j+1])%10;
      }
   }
   printf("%d%%", arr[0]*10 + arr[1]);

   return 0;
}