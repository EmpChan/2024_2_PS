#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int wa = 0;
    char str[51];
    int n;
    cin >> n >> str;
    for (int i = 0; i < n; i++)
    {
        wa = (wa+ ((long long)(str[i] - 'a' + 1)*(long long)pow(31,i)))%1234567891;
    }
    cout << wa % 1234567891;
}