#include<iostream>
using namespace std;
int main(){
    int x  = 3;
    //the value of x is increased before the value of x is assigned to y
    //hence the value is assigned to y is the value of x after being increased
    int y = ++x;
    cout<<"x:"<<x<<endl; // x wii be 4
    cout<<"y:"<<y<<endl; // y will br#e 4
    return 0;
    
}