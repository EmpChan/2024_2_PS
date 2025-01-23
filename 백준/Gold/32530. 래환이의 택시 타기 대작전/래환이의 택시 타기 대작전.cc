#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int>v;

int calc_time(int a, int b){
    return a*60+b;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int a, b;
        scanf("%d:%d",&a,&b);
        v.push_back(calc_time(a,b));
    }
    sort(v.begin(),v.end());
    int cnt = 0;
    int i = 0 ;
    while(i < n){
        int j = 0;
        while(i+j < n && j<3 && v[i+j]-v[i]<=20){
            j++;
        }
        cnt++;
        i+=j;
    }
    printf("%d",cnt);
}