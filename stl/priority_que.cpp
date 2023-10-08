#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // it is also called as max Heap
    priority_queue<int>pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    // cout << pq[0]; indexing will not work for priority queue
    // for(auto it:pq){
    //     cout << it << " ";
    // }
    cout << pq.top() << " ";
    pq.pop();
    cout << pq.top() << " ";
    pq.pop();
    cout << pq.top() << " ";
    pq.pop();
    cout << pq.top() << " ";
    pq.pop();
    pq.pop();
    pq.pop();
    

    // min heap while pushing the elenments multiply with -1



}