#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,sum = 1,a;
    cin >> n >> k;
    for(int i = 1; i <= k;i++){
        sum += n*i;
        sum -= (1 + 2*(i - 1));
    }
    cout << sum;
}
