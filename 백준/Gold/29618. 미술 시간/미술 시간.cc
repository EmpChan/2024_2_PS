#include <iostream>
#include <vector>

using namespace std;

vector<int>j(100001);
vector<int>color(100001);

int main()
{
   ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   
   int n,m;
   cin >> n >> m;
   for(int i=0; i<=n; i++){
      j[i] = i+1;
   }
   for(int i=0; i<m; i++){
      int a,b,c;
      cin >> a >> b >> c;
      int p = a;
      int maxip = b+1;
      vector<int>v;
      while( p <= b ){
         if(!color[p]) color[p] = c;
         maxip=max(maxip,j[p]);
         v.push_back(p);
         p = j[p];
      }
      for(auto t : v)j[t] =maxip; 
   }
   for(int i=1; i<=n; i++){
      cout << color[i] << ' ';
   }
   return 0;
}