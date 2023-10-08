#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>Q;
    Q.push(10);
    Q.push(20);
    Q.push(30);
    Q.push(40);
    cout << Q.front();
    cout << Q.size();
    Q.pop();
    cout << Q.empty() << " ";

}