// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> abacus(vector<vector<int>> &ab, int len, int n){
//     for(int i = len - 1; i >= 0; i--){
//         int dig = n % 10;
//         int j = 0;
//         while(j < 5 && dig != 0){
//             if(j == 0 && dig >= 5){
//                 dig -= 5;
//                 ab[j][i] = 1;
//             }
//             else{
//                 if(j == 0){
//                     j++;
//                 }
//                 ab[j][i] = 1;
//                 dig -= 1;
//             }
//             j++;
//         }
//         n /= 10;
//     }
//     return ab;
// }
// int digit(int n){
//     int cnt = 0;
//     while(n){
//         n /= 10;
//         cnt++;
//     }
//     return cnt;
// }
// int main(){
//     int n;
//     cin >> n;
//     int len = digit(n);
//     vector<vector<int>> ab(5, vector<int>(len, 0));
//     vector<vector<int>> res = abacus(ab, len, n);
//     for(int i = 0; i < 5; i++){
//         for(int j = 0; j < len; j++){
//             if(j == len - 1){
//                cout << res[i][j]; 
//             }
//             else cout << res[i][j] << " ";
//         }
//         cout << endl;
//     }
   

// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    vector<vector<int>> ab;
    for(int i = 0; i < a; i++){
        vector<int> temp;
        for(int j = 0; j < b; j++){
            int n;
            cin >> n;
            temp.push_back(n);
        }
        ab.push_back(temp);
    }
    long long res = 0;
    int p = 0;
    for(int i = b - 1; i >= 0; i--){
        for(int j = 0; j < a; j++){
            cout << ab[j][i] << " ";
        }
    }
    cout << res;
}