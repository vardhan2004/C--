#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<auto>A;
    A.push_back(10);//{10}
    A.push_back(5);//{10, 5}
    A.push_back(100);//{10, 5, 100}
    sort(A.rbegin(), A.rend());
    A.insert(A.begin(), 10;
    A.insert(A.begin()+2, 1);
    A.reverse(A.begin(), A.end());
    for( i = 0; i < A.size(); i++){
        cout << A[i] << " ";
    }
}