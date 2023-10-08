#include<iostream>
#include<deque>
using namespace std;
int main(){
    //deque 
    // same as list but sort function is not worked here
    //we can sort by sort(dq.begin(), dq.end())
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(60);
    dq.push_back(50);
    dq.push_front(5);
    dq.pop_back();
    dq.pop_front();
    // dq.reverse(); there is no reverse function dq
    // dq.sort(); we can't sort the dq as list
    // sort(dq.begin(), dq.end()); it is also not working
    // cout << dq.size();
    for(int i = 0; i < dq.size(); i++){
        cout << dq[i] << " ";
    }
    cout << endl;
    for(auto it:dq){
        cout << it << " ";

    }

    
}