#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
void print(unordered_map<auto, auto> mpp){
  for(auto it:mpp){
    cout << it.first << " : "<< it.second << endl;
  }
}
int main(){
  // unordered_map<int, int>mpp;
  // int arr[12] = {1,3, 2, 5, 2, 6, 2, 6, 3 ,7, 8, 8};
  // for(auto i:arr){
  //   mpp[i]++;
  // }
  //first :- key, second:- value
  // print(mpp);
  // cout << mpp.size(); we can see the size of map
  // mpp.insert({10, 20});
  // print(mpp);
  // mpp[10] = 20 ;
  // auto itr = mpp.find(10);
  // if(mpp.end() == itr){
  //   cout << "say hai";
  // }
  // // cout << itr.first;
  // pair<int, int>p;
  // p = {1, 2};
  // cout << p.second;
  // mpp.erase(10);
  // print(mpp);
  // cout << mpp.empty(); checking whether the map is empty or not(0 if not empty else 1)
  // mpp.clear();
  // cout << mpp.empty();
  // char c1 = 'a';
  // char c2 = 'b';
  // if(c1 < c2){
  //   cout << "yes";
  // }

  // int arr[8] = {478, 757, 314, 471, 729, 100, 459, 618};
  // cout << accumulate(arr, arr+8, 0) << endl;
  // cout << 3926/2;

}