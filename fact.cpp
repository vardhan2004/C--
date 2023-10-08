#include<bits/stdc++.h>
using namespace std;
long long fact(int n){
    if(n == 0){
        return 1;
    }
    long long sub = fact(n - 1);
    long long ans = n*sub;
    return ans;
}
int main(){
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}