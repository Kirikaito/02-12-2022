#include <bits/stdc++.h>

using namespace std;

int main()
{
    int R,r,h,b;
    cin >> R >> r >> h >> b;
    if(R + (b - r) > h){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
