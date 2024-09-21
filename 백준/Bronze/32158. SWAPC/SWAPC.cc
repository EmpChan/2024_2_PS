#include <iostream>
#include <queue>

using namespace std;
queue<int>pq,cq;
int main(){
    int n;
    string str;
    cin >> n >> str;
    for(int i =0; i<n; i++){
        if(str[i]=='P')pq.push(i);
        else if(str[i]=='C')cq.push(i);
    }
    while(pq.size() && cq.size()){
        swap(str[pq.front()],str[cq.front()]);
        pq.pop();
        cq.pop();
    }
    cout << str;

    return 0;
}