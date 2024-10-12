#include <iostream>
#include <vector>

using namespace std;

int main(){
    string t;
    cin >> t;
    int cnt[2] = {0};
    int now = 0;
    while(now < t.size()){
        cnt[t[now++]-'0']++;
        while(now < t.size() && t[now] == t[now-1])now++;
    }
    cout << min(cnt[0], cnt[1]);
}