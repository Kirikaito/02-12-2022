#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,d = 0;
    cin >> n >> k;
    vector<int>gr(n);
    vector<int>ch(n,1);
    for(int i = 0;i < gr.size();i++){
        gr[i] = i + 1;
    }
    while(gr.size() > 1){
        for(int i = 0;i < gr.size();i++){
            d++;
            if(d == k){
                d = 0;
                ch[i] = 0;
            }
        }
        for(int i = 0;i < gr.size();i++){
            if(gr.size() == 1){
                break;
            }
            if(ch[i] == 0){
                gr.erase(gr.begin() + i);
                ch.erase(ch.begin() + i);
            }
        }
    }
    cout << gr[0];
}
