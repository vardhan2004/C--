#include<iostream>
#include<cmath>
using namespace std;
auto prime(int n){
    if(n <= 1){
        return "Not a Prime";
    }
    else{
        int sq = sqrt(n) + 1;
        for(int i = 2; i <= sq; i++){
            if (n%i == 0){
                return "Not a Prime";
            }
        }
        return "a Prime";
    }
}
int main(){
    int n;
    cout << " ENter a Number:";
    cin >> n;
    cout << " It is " << prime(n);
}
