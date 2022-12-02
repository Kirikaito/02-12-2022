#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,k,c = 0;
    char in,tx,ty;
    cin >> n >> m >> k;
    vector<char> buff;
    vector<vector<char>> tor1;
    vector<vector<char>> tor2;
    for(int i = 0;i<n;i++){
        for(int e = 0;e<m;e++){
            buff.push_back(in);
        }
        tor1.push_back(buff);
        buff.clear();
    }
    for(int d = 0;d < k;d++){
        for(int x = 0;x < m;x++){
            for(int y = 0;y < n;y++){
                for(int nx = x - 1;nx < x + 2;nx++){
                    for(int ny = y - 1;ny < y + 2;ny++){
                        if(ny < 0){
                            ty = n - 1;
                        }else{
                            if(ny < n - 1 ){
                                ty = 0;
                            }else{
                                ty = ny;
                            }
                        }
                        if(nx < 0){
                            tx = m - 1;
                        }else{
                            if(nx < m - 1 ){
                                tx = 0;
                            }else{
                                tx = nx;
                            }
                        }
                        if(tor1[ty][tx] == '*'){
                            c++;
                        }
                    }
                }
                if((c == 2) or (c == 3)){
                    tor2[y][x] = '*';
                }else{
                    tor2[y][x] = '.';
                }
                c = 0;
            }
        }
        tor1 = tor2;
    }
    for(auto i : tor1){
        for(auto e : i){
            cout << e;
        }
        cout<<endl;
    }
}
