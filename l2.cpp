#include<bits/stdc++.h>
using namespace std;
string canChange(int n, vector<int> arr){
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        if(arr[i] == 5){
            mpp[arr[i]]++;
        }
        else{
            int dif = arr[i] - 5;
            while(dif){
                cout << dif << endl;
                if(dif >= 10 && mpp.find(10) != mpp.end()){
                    mpp[10]--;
                    dif -= 10;
                }
                else{
                    if(dif % 5 || mpp[5] < dif/5 ) return "false";
                    else{
                        mpp[5] -= dif/5;
                        dif -= (dif/5)*5;
                    }
                }
            }
        }
        mpp[arr[i]]++;
    }
    return "true";
}
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        v.push_back(t);
    }
    cout << canChange(n, v);
    return 0;

}