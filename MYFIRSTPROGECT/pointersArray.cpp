#include<iostream>
using namespace std;
int main() {
    int numbersArray [5];
    int * ppointer = nullptr;
    //assign first address to the first element to the pointer
    ppointer = numbersArray;
    *ppointer = 10; //assign a value tio the first element
    //increment the pointer using pointer arithmetic
    ppointer++;
    *ppointer = 20;
    ppointer = &numbersArray[2];
    *ppointer = 30;
    ppointer = numbersArray+3;
    *ppointer = 40;
    ppointer = numbersArray;
    *(ppointer+4) +50;
    for(int n = 0; n<5; n++)
{
    cout<<numbersArray[n]<<" ,";
}



}