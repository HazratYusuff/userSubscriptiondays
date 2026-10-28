#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

    srand(time(0));

    int daysUntilExpiration =rand() % 12;
    cout << "daysUntilExpiration = " << daysUntilExpiration << endl; 

    if(daysUntilExpiration <= 10){
        cout << "Your subscription will expire soon.\n Renew now!" << endl; 
    }

    if(daysUntilExpiration <= 5){
        cout << "Your subscription expires in value of daysUntilExpirationdays.\n Renew now and save 10%!" << endl; 
    }

    if(daysUntilExpiration == 1){
        cout << "Your subscription expires within a day!\n Renew now and save 20%" << endl;
    }

    if(daysUntilExpiration == 0){
        cout << "Your subscription has expired." << endl;

    }

    else
        cout << "You have an active subscription." << endl;
    

    return 0;
}
