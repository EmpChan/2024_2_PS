#include <iostream>

using namespace std;
string funA(string a){ // A연산 역연산 
   string t = "";
   for(int i=0; i<a.length()-1; i++){
      t+=a[i];
   }
   return t;
}

string funB(string a){ // B연산 역연산 
   string t = "";
   for(int i=a.length()-1; i>0; i--){
      t+=a[i];
   }
   return t;
}

void sol(string a, string b){
   if(a.length() > b.length())return;
   if(a == b){
      cout << 1;
      exit(0);
   }
   if(b[b.length()-1] == 'A'){
      sol(a,funA(b));
   }
   if(b[0] == 'B'){
      sol(a,funB(b));
   }
}

int main(){
   string a,b;
   cin >> a >> b;
   sol(a,b);
   cout << 0;
}