#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    string res = "";
    string ans = "";
    for(auto i:s){
        int t = i;
        if(t >= 97 && t <= 122 || t >= 65 && t <= 90){
            res += i;
        }
        else{
            cout << i;
            if(res != ""){
                reverse(res.begin(), res.end());
                ans += res;
                
            }
            ans += i;
            res = "";
        }
    }
    if(res != ""){
        reverse(res.begin(), res.end());
        ans += res;
    }
    cout << res;
}