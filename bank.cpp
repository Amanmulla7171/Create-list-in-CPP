#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	private:
		string accountholder;
		int accountnumber;
		string accounttype;
		double balance;
	public:
		//default constructor
		BankAccount(){
			cout<<"Account Details:"<<endl;
		}
		//parameterised constructror
		BankAccount(string ah,int an,string at,int bal){
			accountholder=ah;
			accountnumber=an;
			accounttype=at;
			balance=bal;
		}
		string getAccountHolder(){
			return accountholder;
		}
        int getAccountNumber(){
        	return accountnumber;
		}
        string getAccountType(){
        	return accounttype;
		}
        double getBalance(){
        	return balance;
		} 
        void setAccountType(string newType){
        	accounttype=newType;
        	
		}
		void deposit(double amount){
		    cout<<"deposit Amount"<<amount<<endl;
			balance+=amount;
		}
		void withdraw(double amount){
			cout<<"withdraw Amount"<<amount<<endl;
			balance-=amount;
			
		}
		//display function
		void displayAccountDetails(){
			
		
			cout<<"Holder:"<<accountholder<<endl;
			cout<<"Account Number:"<<accountnumber<<endl;
            cout<<"Type:"<<accounttype<<endl;
            cout<<"Balance:"<<balance<<endl;
            
		}
		
};
   
int main(){
    BankAccount b;
	b.displayAccountDetails();
	cout<<"\n";
	BankAccount b1("aman",7171,"saving",1000.00);
	b1.displayAccountDetails();
	cout<<"\n";
	b1.deposit(1000);
	b1.withdraw(500);
	cout<<"\n";
	cout<<"updated account deatils"<<endl;
	b1.displayAccountDetails();
	
	return 0;
}

