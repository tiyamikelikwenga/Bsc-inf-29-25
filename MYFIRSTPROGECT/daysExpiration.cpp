#include <iostream>
#include <random>
using namespace std;
int main() {
    random_device rd;
    mt19937 gen (rd());
    uniform_int_distribution<int>dist(0 , 11);
    int a = dist (gen);
    switch (a)
    {

    

    case 0:

    cout<<"has expired"<<endl;
    
    

   case 1:(a==1);{
    cout<<"expires withina day"<<endl;
    cout<<"renew now and save 20%"<<endl;
    
   }
   

    case 2:(a<=5);{
    cout<<"expires in 5 days"<<endl;
    cout<<"renew now and save 10%"<<endl;
    
   }


  case 3:(a<=10);
    cout<<"will expire soon"<<endl;
    
    
    

 case 4:(a<=10);
    cout<<"active subscription"<<endl;

    return 0;
    }

}

   
    
