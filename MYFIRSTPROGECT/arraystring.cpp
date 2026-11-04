#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <string> str={"B123" ,"C234" ,"A345" ,"C15" ,"B177" ,"G3003" ,"C235","B179"};
    for(int i=0;i<str.size();i++){
        if(str[i][0]=='B')
        cout<<str[i]<<" ";
    }
}

    