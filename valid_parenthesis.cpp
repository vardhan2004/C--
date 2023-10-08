#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<pair<char, int>> st;
    string s1;
    cin >> s1;
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] == '('){
            st.push({s1[i], i});
        }
        else{
            pair<char, int> temp = st.top();
            st.pop();
            if(st.empty()){
                s1[temp.second]  = '0';
                s1[i] = '0';
            }
        }
    }
    string res = "";
    for(auto it:s1){
        if(it != '0'){
            res += it;
        }
    }
    cout << res;
    
}