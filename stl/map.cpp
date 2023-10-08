#include<iostream>
#include<map>
using namespace std;
int main(){
    //address are not arranged in continously
    // map<int, int>M;
    // M[1] = 10;
    // M[2] = 20;
    // map<int, int>::iterator it;
    // // cout << it.begin();
    // it  = M.begin();
    // it++;
    // // cout << (*(it)).second;
    // cout <<it->second;
    // map<char, int>m;
    // // string s;
    // // getline(cin, s);   
    // // for(auto c:s){
    // //     m[c]++;
    // // } 
    // // // map<char, int>::iterator it;
    // // // it = m.begin();
    // // for(auto it: m){
    // //     cout << it.first << ":" << it.second << endl;
    // // }
    // // cout << m['x'];
    // // int x, y;
    // // x = 0;
    // // y = 0;
    // // cout << x <<" "<< y;
    map<char, int>m;
    m['a'] = 10;
    m['b'] = 20;
    cout << m['a'];
    return 0;

}