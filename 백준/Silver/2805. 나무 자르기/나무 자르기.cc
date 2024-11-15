#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using lld = long long;

vector<lld>arr;

lld gets(lld height){
   lld r = 0;
   for(auto i = arr.rbegin(); i!=arr.rend(); i++){
      if(height>=*i)return r;
      r+=*i-height;
   }
   return r;
}

lld search(lld goal){
   lld mi=0,ma=*arr.rbegin();
   while(mi<ma){
      lld mid = (mi+ma)/2;
      lld s = gets(mid);
      if(s > goal){
         mi = mid + 1;
      }
      else{
         ma = mid;
      }
   }
   return mi;
}

int main(){
   ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   
   lld n,m;
   cin >> n >> m;
   arr.resize(n);
   for(int i=0; i<n; i++)cin >> arr[i];
   sort(arr.begin(),arr.end());
   lld ans = search(m);
   while(gets(ans) < m){
      ans--;
   }
   cout << ans;
   return 0;
}