#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s = "i love cpp and python";
    char A[100] = "I love cpp and python";
    // cout << s.size();
    // int n1, n2;1
    // cin >> n1 >> n2;
    // cout << n1 <<" "<< n2;
    // sort(s.begin(), s.end()); // to sort in ascending order
    // sort(s.rbegin(), s.rend());  // to sort in ascending order
    // s.push_back('x');//to add charecter at end 
    // s.pop_back();//toremove the charecter  at end
    // s.append(" and java");//to add the stirng at the end of the string 
    // auto it = s.find("java");//to delete the word java from the string
    // s.erase(it);
    // for(int i = 0; i <= s.size(); i++){
    //     cout << s[i];
    // }
    // char *ptr = str(A, " ");
    // cout << ptr << endl;
    //splitting a string
    // stringstream check1(s);
    // string word;
    // while(getline(check1, word, ' ')){
    //     cout << word << " ";
    // }
    //substring
    string ss = s.substr(2, 4);
    cout << ss;
    
}