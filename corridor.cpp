#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void hero(){
    int n;
    vector<int>A(299, 0);
    int fl = INT_MAX;
    cin >> n;
    while(n){
        int loc, act;
        cin >> loc >> act;
        if(A[loc] == 0) A[loc] = act;
        else A[loc] = min(A[loc], act);
        fl = min(fl, loc);
        n--;
    }
    int ans = ceil(A[fl]/2.0)-1+fl;
    for(int i = fl+1; i <= ans; i++){
        if(A[i] != 0){
            int res = ceil(A[i]/2.0)-1 + i;
            ans = min(ans, res);
        }
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t){
        hero();
        t--;
    }
}