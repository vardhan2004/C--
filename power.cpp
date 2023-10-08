#include<bits/stdc++.h>
using namespace std;
long long ans;
int Power(int base, int exp){
    if(exp == 0) return ans;
    if(exp % 2){
        ans = base*ans;
        exp--;
    }
    else{
        base = base*base;
        exp /= 2;
    }
    
    return Power(base, exp);
}
int main(){
    int n;
    int exp;
    cin >> n >> exp;
    ans = 1;
    cout << Power(n, exp);
    return 0;
}