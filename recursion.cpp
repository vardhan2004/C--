#include<bits/stdc++.h>
using namespace std;
int key;
pair<int, int> fun(vector<int> v, int n, int i){
    if(i == v.size() || n == -1) return -1;
    else{
        if(v[n] == key) return n;
        if
    }
    int first = fun(vector, n, i + 1);
    int last = fun(vector, n - 1, i);
}

int main(){
    vector<int> v = {1, 7, 2, 4, 7, 8, 6};
    i = 0;
    n = v.size();
    key = 7;
    cout << fun(v, n, i);

}