#include <iostream>
#include <deque>
#include <vector>

using namespace std;

deque<int>dq;
vector<int>nums;

int main(){
    int n;
    cin >> n;
    nums.resize(n+1);
    for(int i=0; i<n; i++){
        dq.push_back(i+1);
    }
    for(int i=0; i<n; i++)cin >> nums[i+1];
    while(!dq.empty()){
        int now = dq.front();
        cout << now << ' ';
        dq.pop_front();
        if(dq.empty())continue;
        if(nums[now] > 0){
            for(int i=0; i<nums[now]-1; i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else{
            for(int i=nums[now]; i<0; i++){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}