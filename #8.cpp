#include <bits/stdc++.h>

using namespace std;

int main()
{
    double k,n,m,d,res;
    cin >> k >> n >> m >> d;
    res = d/(1 - (k*m + k*n + m*n)/(m*n*k));
    if((res = (int)res) and (res > 0)){
        cout << res;
    }else{
        cout << -1;
    }
}
