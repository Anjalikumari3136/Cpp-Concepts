#include<iostream>
#include<string>
using namespace std;
class Account{
    protected:
    int accountNumber;
    string holder_name;
    double balance;
    public:
    Account(int accNo,string name,double bal){
        accountNumber=accNo;
        holder_name=name;
        balance=bal;

    }
    void deposit(double amount){
            if(amount>0){
                balance+=amount;
                cout<<"Rs "<<amount<<" deposited successfully!"<<endl;
            }
            else{
                cout<<"Invalid amount"<<endl;
            }

        }
        void displayAccount(){
            cout<<"Account Number: "<<accountNumber<<endl;
            cout<<"Holder Name: "<<holder_name<<endl;
            cout<<"Balance: Rs "<<balance<<endl;
        }
};

class SavingsAccount: public Account{
    double interestRate;
    public:
    SavingsAccount(int accNo,string name,double bal,double r):Account(accNo,name,bal){
        interestRate=r;
    }
    void addInterest(){
        double interest=balance*interestRate/100;
        balance+=interest;
        cout<<"Interest of Rs "<<interest<<" added to the account."<<endl;
    }
};
int main(){
    int accNo;
    string name;
    double bal,rate;
    cout<<"Enter Account Number: ";
    cin>>accNo;
    cin.ignore();
    cout<<"Enter Holder Name: ";
    getline(cin,name);
    cout<<"Enter Initial Balance: ";
    cin>>bal;
    cout<<"Enter Interest Rate (%): ";
    cin>>rate;
    SavingsAccount mySavings(accNo,name,bal,rate);
    mySavings.displayAccount();
    mySavings.addInterest();
    cout<<"--------After adding interest-------- "<<endl;
    mySavings.displayAccount();
    return 0;

}