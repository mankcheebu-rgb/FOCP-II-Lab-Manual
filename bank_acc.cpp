#include<iostream>
using namespace std;
class bankaccount
{
    string accountholdername;
    int accountNumber;
    double balance;
    public:
    void inputdetails();
    void displaydetails();
    void deposit(double amount);
    void withdraw(double amount);
};
void bankaccount::inputdetails()
{
    cout<<"enter account holder name:";
    cin.ignore();
    getline (cin,accountholdername);
    cout<<"\n enter account number:";
    cin>> accountNumber;
    cout<<"\n enter balance:";
    cin>>balance;
}
void bankaccount::deposit(double amount)
{
    balance+=amount;
    cout<<"\n amount deposited \n balance="<<balance;
}
void bankaccount::withdraw(double amount)
{
    if (amount>balance)
        cout<<"\n Denied...Insufficient balance:";
    else{
        balance-=amount;
        cout<<"\n Amount withdraw \n balance ="<<balance;
    }
}
void bankaccount::displaydetails()
{
    cout<<"\n Account number: "<<accountNumber;
    cout<<"\n Account Holder Name: "<<accountholdername;
    cout<<"\n Balance: "<<balance;
}
int main()
{
    bankaccount ac1;
    ac1.inputdetails();
    
    char choice;
    //cin.ignore();  // Clear the input buffer
    cout<<"\n D for deposit W for withdrawal:";
    cin>>choice;
    if(choice=='d' || choice=='D')
    {
        ac1.deposit(5000);
    }
    else
    {
        ac1.withdraw(12000);
    }
    ac1.displaydetails();
    return 0;
}