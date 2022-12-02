#include <iostream>

using namespace std;
int lis[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int main()
{
    int n,m,p1,p2,sum = 0;
    double r = 0;
    
    cin >> n;
    
    
    for(int i = 0; i<n; i++){
        cin >> lis[i];
        if(lis[i] == 10){
            r++;
        }else{
            r += 0.5;
        }
    }
    
    
    sum += lis[0] + lis[1];
    if(lis[0] == 10){
        sum += lis[1];
    }
    
    for(int i = 2; i<n; i++){
        sum += lis[i];
        
        if(lis[i - 2] == 10){
            sum +=lis[i];
        }else{
            if(lis[i - 1] + lis[i - 2] == 10){
            sum +=lis[i];
            }
        }
        if(lis[i - 1] == 10){
            sum +=lis[i];
        }
    }
    if(r > 10){
        if(lis[n - 3] == 10){
            sum = sum - lis[n - 2] - lis[n - 1];
            if(lis[n - 4] == 10){
                sum = sum - lis[n - 2];
            }
        }else{
            sum = sum - lis[n - 1];
        }
    }
    cout << sum;
    return 0;
}
