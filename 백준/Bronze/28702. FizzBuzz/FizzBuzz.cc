#include <iostream>
#include <algorithm> // sort
#include <vector>
#include <string>
#define MAX 500000000

using namespace std;


int main(){
   for(int i=0; i<3; i++){
      string a;
      cin >> a;
      if(a[0]<'0' || a[0] >'9')continue;
      int t = stoi(a) + 3-i;
      if(t%3&&t%5)cout << t;
      else if(t%3)cout << "Buzz";
      else if(t%5)cout << "Fizz";
      else cout << "FizzBuzz";
      break;
   }
}