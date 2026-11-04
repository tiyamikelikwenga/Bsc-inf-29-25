#include<iostream>
using namespace std;
int* ppointer = nullptr;
int numbersArray[3] ={10, 20, 30,};
//assign address of first element to pointer
ppointer = numbersArray;
cout<<"address at ppointer:"<<ppointer<<endl;
cout<<""