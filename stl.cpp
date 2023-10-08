#include<bits/stdc++.h>
#include<list>
#include<vector>
using namespace std;
int main(){
    // list<int>li;
    // li.push_back(10);
    // li.push_back(20);
    // li.push_back(30);
    // li.push_front(50);
    // li.push_front(70);
    // li.sort();
    // li.reverse();
    // auto ind = li.begin();
    // ind++;
    // ind++;
    // li.insert(ind, 3, 1000);
    // cout << li.front() << endl;
    // cout << li.back() << endl; 
    // // li.pop_front();
    // // li.pop_back();
    // auto k = li.begin();
    // auto e = li.end();
    // e--;
    // cout << *k << endl;
    // cout << *e << endl;
    // // cout << li.size() << endl;
    // for(auto it: li){
    //     cout << it << " ";
    // }
    // deque<int>dq;
    // dq.push_back(10);
    // dq.push_back(20);
    // dq.push_front(10);
    // dq.push_front(20);
    // sort(dq.begin(), dq.end());
    // reverse(dq.begin(), dq.end());
    // auto fa = dq.begin();
    // auto ea = dq.end();
    // ea--;
    // cout << *fa <<  " ";
    // cout << *ea << " ";
    // cout << dq.size() < " ";
    // for(auto it:dq){
    //     cout << it << " ";
    // }
    // dq.clear();
    // cout << dq.size() << " ";
    // map<char, int>M;
    // string s;
    // getline(cin, s);
    // for(int i = 0; i < s.size(); i++){
    //     M[s[i]]++;
    // }
    // reverse(M.rbegin(), M.rend());
    // map<char,int>::iterator it;
    // cout << M.size() << endl;
    // for(auto it:M){
    //     cout << it.first <<" "<< it.second <<" ";
    // }

    // cout << endl;
    // char key;
    // cin >> key;
    // if (M.find(key) == M.end()){
    //     cout << ": ( Not Found";
    // }
    // else{
    //     cout << ": ) Found";
    // }
    // multi map
    // multimap<char, int>mm;
    // string st;
    // getline(cin, st);
    // mm.insert(pair<char, int>('a', 1));
    // mm.insert(pair<char, int>('b', 1));
    // for(int i = 0; i < st.size(); i++){
    //     mm.insert(pair<char, int>(st[i], 1));
        
    // }
    // for(auto it:mm){
    //     cout << it.first << " " << it.second << " "; 
    // }
    // cout << endl;
    // cout << mm.size();
    // set<int>a;
  
    // a.insert(1);
    // a.insert(2);
    // a.insert(3);
    // a.insert(4);
    // a.insert(5);
    // a.insert(6);
    // set<int>::iterator itr;
    // set<int> b(a.begin(), a.end());
    // for(itr = b.begin(); itr !=  b.end(); itr++){
    //     cout << *itr << " ";
    // }
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for(auto i : a){
        cout << i << " ";
    }
    

}
