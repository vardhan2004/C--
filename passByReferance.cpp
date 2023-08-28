#include<iostream>
using namespace std;
void fun(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int x, y;
    x = 10;
    y = 20;
    cout << "before swapping" << endl;
    cout << x << " " << y << endl;
    // swapping them by using pass by reference
    fun(x, y);
    cout << "after swapping" << endl;
    cout << x << " " << y << endl;

}