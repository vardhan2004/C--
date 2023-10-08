#include<bits/stdc++.h>
using namespace std;
int res(int a, int b, int c){
    if(a == b){
        return 0;
    }
    int big = max(a, b);
    int sm = min(a, b);
    int cnt = 0;
    float mid = (a + b)/2.0;
    while(big > mid){
        big -= c;
        cnt++;
    }
    return cnt;
}
int main(){
    int t;
    cin >> t;
    while(t){
        int a, b, c;
        cin >> a >> b >> c;
        cout << res(a, b, c) << endl;
        t--;
    }
    return 0;
}