#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int k, n;
    cin >> n >> k;
    queue<int> q;
    for(int i=1; i<=n; i++)q.push(i);
    cout << '<';
    for(int i=0; i<n-1; i++){
        for(int j=0; j<k-1; j++){
            int t=q.front();
            q.pop();
            q.push(t);
        }
        cout << q.front() << ", ";
        q.pop();
    }   
    cout << q.front() << '>';
}