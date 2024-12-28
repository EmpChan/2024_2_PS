#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int>kr;
vector<int>lvl;

int main(){
   int n;
   cin >> n;
   kr.resize(n);
   lvl.resize(n);
   for(int i=0; i<n; i++)cin >> kr[i];
   sort(kr.begin(),kr.end());

   int m,tmp;
   cin >> m;
   for(int i=0; i<m; i++){
      cin >> tmp;
      if(kr[kr.size()-1] < tmp){
         cout << -1;
         return 0;
      }
      for(int i=0; i<n; i++){
         if(tmp <= kr[i]){
            lvl[i]++;
            break;
         }
      }
   }

   int x = 0, t = 0;
   while(x < m){
      t++;
      for(int i=0; i<n; i++){
         for(int j=i; j>=0; j--){
            if(lvl[j]){
               x++;
               lvl[j]--;
               break;
            }
         }
      }
   }
   cout << t;
}