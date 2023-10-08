#include<bits/stdc++.h>
using namespace std;
void Print(vector<int>&v){
    int len = v.size();
    for(int i = 0; i < len; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int>v = {12, 3, 4, 7, 5};
    //sorting
    // sort(v.begin()+1, v.end());
    for(int i = 0; i < 5; i++){
        for(int j = i; j < 5; j++){
            if(v[i] > v[j]){
                swap
            }
        }
    }
    Print(v);

    
}