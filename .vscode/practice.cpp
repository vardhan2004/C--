#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin >> n >> q;
    vector<vector<int>>A;
    for(int i = 0; i < n; i++){
        vector<int>B;
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int n;
            cin >> n;
            B.push_back(n);
        }
        A.push_back(B);
    }

    
    for(int i = 0; i < q; i++){
        int q1, q2;
        cin >> q1 >> q2;
        cout << A[q1][q2];
    }
}