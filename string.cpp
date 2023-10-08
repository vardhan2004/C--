#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string  a;
    cout << "enter a string :";
    getline(cin, a);
    a.to_upperCase();

    cout << a;


}