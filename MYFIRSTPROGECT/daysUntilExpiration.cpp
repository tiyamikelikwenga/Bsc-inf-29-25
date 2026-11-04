#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int daysUntilExpiration = rand() % 12;
    if (daysUntilExpiration<= 10){
        cout << "your subscription will expire soon. renew now!" <<endl; 
    }else if (daysUntilExpiration <= 5) {
        cout << "your subscription value of daysUntilExpirationdays renew now and save 10%!"<<endl;
       else if (daysUntilExpiration ==1){
            cout <<" your subscription expires within a day! renew now and save 10%!"<<endl;
          else  if (dayusUtilExpiration ==0) {
                cout << "your subscription has expired"<< endl;
             else   if (daysUntilExpiration > 10){
                    cout << "you have an active subscription" <<endl
                }
            }
        }
    }
}