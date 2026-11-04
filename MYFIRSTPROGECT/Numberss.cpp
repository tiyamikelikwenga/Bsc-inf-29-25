#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter number ot rows(max 3): ";
    cin>>rows;
    cout<<"Enter number of cols (max 3): ";
    while(rows >3 || cols>3 || rows <=0 || cols<=0){
        cout<<"Dimensions must not exceed 3.try again."<<endl;
        cout<<"Enter number of row (max 3): ";
        cin>>rows;
        cout<<"Enter number of cols (max 3): ";
        cin>>cols;
    }
    double **arr = new double*[rows];
    for(int i=0; i<rows; i++){
        arr[i]= new double[cols];
    }
    for (int i =0; i<rows; i++){
        for (int j =0; j<cols; j++)
    {
        cout<<"Enter value for ["<< i <<"][" << j <<"]: ";
        cin>>arr[i][j];
    }
    }
    cout<<" The array is :"<<endl;
    for(int i =0; i<rows; i++){
        for (int j = 0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i =0; i<rows; i++){
        delete[]arr[i];
    }
    delete[]arr;
    return 0;
    
}
