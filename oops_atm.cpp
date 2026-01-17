//ATM Machine Simulation using OOP concepts in C++
#include<iostream>
using namespace std;
class Atm{
    private:
    int pin;
    double balance;
    public:
    Atm(int userPin,double userBalance){
        pin=userPin;
        balance=userBalance;
    }
    bool verifyPin(int enteredPin){
        return enteredPin==pin;
    }
    void checkBalance(){
        cout<<"your current balance is : Rs "<<balance<<endl;
    }
    void deposit(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"Rs "<<amount<<" deposited successfully!"<<endl;
        }else{
            cout<<"Invalid amount"<<endl;
        }
    }
    void withdraw(double amount){
        if(amount>balance){
            cout<<"Insufficient balance!"<<endl;
        }else if(amount<=0){
            cout<<"Invalid amount"<<endl;
        }else{
            balance-=amount;
            cout<<"Rs "<<amount<<" withdrawn successfully"<<endl;
        }
    }
};

int main(){
    int enteredPin,choice;
    double amount;
    Atm userAtm(1234,50000);
    cout<<"Welcome to ATM"<<endl;
    cout<<"Enter your pin : ";
    cin>>enteredPin;
    if(!userAtm.verifyPin(enteredPin)){
        cout<<"Incorrect Pin"<<endl;
        return 0;
    }
    do{
        cout<<"-----Atm Menu-----\n";
        cout<<"1. Check Balance\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Withdraw Money\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:
            userAtm.checkBalance();
            break;
            case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            userAtm.deposit(amount);
            break;
            case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            userAtm.withdraw(amount);
            break;
            case 4:
            cout<<"Thank you for using Atm";
            break;
            default:
            cout<<"Invalid choice! Try again";

        }
        
    }while(choice!=4);
    return 0;
}