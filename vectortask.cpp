#include<iostream>
#include<string>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;
vector<int>res(vector<int>&A, vector<int>&B){
    int n = A.size();
    int m = B.size();
    reverse(A.begin(), A.end());
    reverse(B.begin(),B.end());
    int len = min(n,m);
    int i;
    int carry = 0;
    vector<int>ans;
    for(i= 0; i < len; i++){
        int sum = A[i] + B[i] + carry;
        ans.push_back(sum%10);
        carry = sum / 10;
    }
    // cout << A[i];
    if(i < n){
        while(i < n){
            int sum = A[i] + carry;
            ans.push_back(sum%10);
            carry = sum / 10;
            i++;
        }
    }
    if(i < m){
        while(i < m){
            int sum = B[i] + carry;
            ans.push_back(sum%10);
            carry = sum / 10;
            i++;
        }
    }
    while(carry){
        ans.push_back(carry % 10);
        carry = carry /10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int m = s1.size();
    int n = s2.size();
    // cout << m << n;
    vector<int>A,B;
    for(int i = 0; i < m; i++){
        A.push_back(s1[i] - '0');
    }
    for(int i = 0; i < n; i++){
        B.push_back(s2[i] - '0');
    }
    // for(int i = 0; i < m; i++){
    //     cout << (A[i]) << " ";
    // }
    // cout << endl;
    // for(int i = 0; i < n; i++){
    //     cout << (B[i]) << " ";
    // }
    vector<int>C =  res(A,B);
//     for(int i = 0; i<C.size(); i++){
//         cout << "  " << C[i];
//    }
    cout << C;

   return 0;
}
