#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,g;
    cin >> m >> g;
    if(m == 1){
        cout << 'B';
        for(int i = 0;i<g;i++){
            cout << 'G';
        }
        return 0;
    }
    if(g == 1){
        cout << 'G';
        for(int i = 0;i<m;i++){
            cout << 'B';
        }
        return 0;
    }
    
    while((m > 0) and (g > 1)){
        cout << "GBG";
        m -= 1;
        g -= 2;
    }
    for(int i = 0;i<m;i++){
        cout << 'B';
    }
    for(int i = 0;i<g;i++){
        cout << 'G';
    }
}
