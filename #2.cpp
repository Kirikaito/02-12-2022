#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> a ={2, 3, 4, 7, 13};
    vector <int> b ={1, 5, 6, 8, 9,10,11,12};
    for(int i = 5; i < n;i++){
        a.push_back(b[i - 1] + b[i - 3]);
        for(int e = a[i - 1] + 1; e < a[i];e++){
            b.push_back(e);
        }
    }
    cout << a[n - 1] << endl << b[n - 1] << endl;
}
