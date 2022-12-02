#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,l,ma,mb,mc;
    double max = 0,p;
    vector<double>lis;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> l;
        lis.push_back(l);
    }
    for(int a = 0; a < lis.size() ; ++a){
        for(int b = a + 1; b < lis.size() ; ++b){
            for(int c = b + 1; c < lis.size(); ++c){
                p = (lis[a] + lis[b] + lis[c])/2;
                if(sqrt(p*(p-lis[a])*(p-lis[b])*(p-lis[c])) > max){
                    max = sqrt(p*(p-lis[a])*(p-lis[b])*(p-lis[c]));
                    ma = a;
                    mb = b;
                    mc = c;
                }
            }
        }
    }
    if(max > 0){
        cout << max << endl << ma + 1 << " " << mb + 1<< " " << mc + 1;
    }else{
        cout << -1;
    }
}
