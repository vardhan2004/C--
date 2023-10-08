#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //vextor is also like array which will be in dynamic nature
    //create a vector
    vector<int>frq(26, 0);
    vector<int>A = {2, 3, 4, 5, 10, 19};
    // cout << A[0];
    // cout << frq[25];
    A.push_back(100);
    for(int i = 0; i < A.size(); i++){
        cout  << A[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it;
    it = A.begin();
    for(it = A.begin(); it != A.end(); it++){
        cout << (*it) << " ";
    }
    // cout << *(it+4) << endl;
    vector<pair<int, int><vector>v_p = {{2, 3}, {4, 5}, {6, 7}};
    vector<pair<int, int>>::iterator id;
    id = v_p.begin();
    cout << (*id).first;
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int k = arr.end();
    // cout << k;
}

