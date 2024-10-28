#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int timetomin(string a){
    int h = 0;
    int m = 0;
    h = (a[0]-'0')*10 + (a[1]-'0');
    m = (a[3]-'0')*10 + (a[4]-'0');
    return h*60+m;
}

vector<int>v;
vector<int>cnts;

int main(){
    int n;
    int cnt = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        v.push_back(timetomin(a));
    }
    sort(v.begin(),v.end());
    int i=0,j=0;
    while(j<n){
        cnt++;
        while(j<n && v[j]-v[i] <=10){
            j++;
        }
        i=j;
    }
    cout << cnt;

    return 0;
}