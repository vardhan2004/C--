#include<iostream>
using namespace std;
int main(){
    long long int n;
    cout << " Enter A Number: ";
    cin >> n;
    int temp = n;
    long long int sum, rem;
    sum = 0;
    while (n)
    {
        rem = n % 10;
        sum = sum*10 + rem;
        n = n / 10;
    }
    
    cout << "Reverse of a Given  Number is:" << " " << sum;
}