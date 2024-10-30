#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

void is_end_abb(stack<char>&st){
    string a ="";
    if(st.size() < 3)return;
    for(int i=0; i<3; i++){
        a+=st.top();
        st.pop();
    }
    if(a == "BBA"){
        st.push('B');
        is_end_abb(st);
        st.push('A');
        return;
    }
    for(auto i = a.rbegin(); i!=a.rend(); i++)st.push(*i);
}

void sol(){
    int len;
    string s;
    cin >> len >> s;
    stack<char>st;
    for(auto i : s){
        st.push(i);
        is_end_abb(st);
    }
    vector<char>ans(st.size());
    while(!st.empty()){
        ans[st.size()-1] = st.top();
        st.pop();
    }
    for(auto i : ans)cout << i;
    cout <<'\n';
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){sol();}
    return 0;
}