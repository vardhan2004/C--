#include<bits/stdc++.h>
using namespace std;
void insertOrder(int x, stack<int> &st){
    if(st.empty() || st.top() < x){
        st.push(x);
        return;
    }
    int el = st.top();
    st.pop();
    insertOrder(x, st);
    st.push(el);
}
void Sort(stack<int> &st){
    if(st.empty()){
        return;
    }
    int x = st.top();
    st.pop();
    Sort(st);
    insertOrder(x, st);
}
int main(){
    stack<int> st;
    st.push(30);
    st.push(-1);
    st.push(4);
    st.push(2);
    Sort(st);
    while(st.empty() != 1){
        cout << st.top() << ",";
        st.pop();
    }
}