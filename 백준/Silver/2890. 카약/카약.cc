#include <iostream>
#include <deque>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int n,m, ans[10] = {0};
    cin >> n >> m;
    string tmp;
    for(int i=0; i<n; i++){
        cin >> tmp;
        int j=1;
        for(; j < tmp.size() && (tmp[j]<'0' || tmp[j] >'9'); j++)
        if(m==j)continue;
        ans[tmp[j]-'0'] = m-j-2;
    }
    for(int i=1; i<=9; i++){
        int cnt = 1;
        bool flags[51]={0};
        for(int j=1; j<=9; j++){
            if(ans[j]<ans[i] && !flags[ans[j]]){
                flags[ans[j]]=1;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}