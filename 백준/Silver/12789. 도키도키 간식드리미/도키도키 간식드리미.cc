#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n, cnt = 1, now;
    stack<int>s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> now;
        s.push(now);
        while(!s.empty() && cnt == s.top()){
            s.pop();
            cnt++;
        }
    }

    if(s.empty())cout << "Nice";
    else cout << "Sad";

    return 0;
}