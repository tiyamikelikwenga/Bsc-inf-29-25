#include<iostream>
#include<string>
#include<fstream>
#include<cctype>
#include<algorithm>
using namespace std;
string reverse(string s){
  string r = "";
  for (int i = s.size()-1;i>=0;i--)r+=s[i];
  return r;
}
int main(){
 //this creat data.text
 ofstream out("data.text");
 out<<"This is the advanced computer programming module";
 out.close();
 string filedata;
 getline(ifstream("data.text"), filedata);
 int vowels=0, words=1;
 for (char c: filedata){
  
  char l=tolower(c);
  if(l=='a'|| l=='e'||l=='i'||l=='o'||l=='u') vowels++;
  if(c==' ')words++;
 } 
 cout<<"statement:"<<filedata<<endl;
 cout<<"vowels: "<<vowels<<endl;
 cout<<"words: "<<words<<endl;
 cout<<"reversed: "<<reverse(filedata)<<endl;
 for(int i=0; i<filedata.size();i++){
  if(i==0 || filedata [i-1]==' ')
    if(i=1<filedata.size()) filedata[i+1]=toupper(filedata[i+1]);
 }
 cout<<"capitalised: "<<filedata<<endl;
      



}