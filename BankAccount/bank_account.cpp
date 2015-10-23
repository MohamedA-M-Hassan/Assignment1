#include <iostream>
#include <string>
using namespace std ;

class bank_account 
{  
private : 
	string name ;
	string id ;
	double account ; 
public : 
	bank_account (const string & customer , const string & idnum , double acc= 0)
	{
	name = customer ; 
	id = idnum;
	account = acc ;
	}
	void show(void) const;
	void deposit(double cash);
	void withdraw(double cash);
};
int main (){
cout << 1 ;
}