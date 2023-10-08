#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
    list<int>L;
    L.push_back(10);
    L.push_back(30);
    L.push_back(20);
    L.push_back(50);
    L.push_back(40);
    L.sort();
    L.reverse();
    L.push_front(60);
    L.pop_front();
    L.pop_back();
    for(auto it:L){
        cout << it << " ";
    }
    

    // for(int i = 0; i < L.size(); i++){

    // }
    
}